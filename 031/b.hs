import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [l, h] <- map strToInt . words <$> getLine
    -- 整数の入力
    n <- readLn
    -- kaigyousuuretu
    cs <- map strToInt <$> replicateM n getLine
    -- 出力
    forM (solve cs l h) print
    return ()

solve :: [Int] -> Int -> Int -> [Int]
solve cs l h = map f cs
    where
        f x | h < x = -1 | x < l = l - x | otherwise = 0
