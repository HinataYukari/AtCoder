import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    _ <- getLine
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    let xs = filter ((>= 2) . length) $ group $ sort l
    -- 出力
    putStrLn . show . solve $ reverse xs

solve :: [[Int]] -> Int
solve xs
    | (length xs) >= 2 = if (length $ head xs) >= 4 then foldl1 (*) (take 2 $ head xs) else foldl1 (*) (map head $ take 2 xs)
    | (length xs) == 1 = if (length $ head xs) >= 4 then foldl1 (*) (take 2 $ head xs) else 0
    | otherwise = 0
