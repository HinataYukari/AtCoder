import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    let m = 10 ^ 9 + 7
    -- 整数の入力
    n <- readLn
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    -- 出力
    putStrLn . show . (flip mod m) $ solve l n

solve :: [Int] -> Int -> Integer
solve l n
    | odd n = if ((group $ sort l) == ([0] : (map (replicate 2 . (* 2)) [1..(n `div` 2)]))) then (2 ^ (n `div` 2)) else 0
    | otherwise = if ((group $ sort l) == (map (replicate 2) $ filter odd [1..(n-1)])) then (2 ^ (n `div` 2)) else 0
