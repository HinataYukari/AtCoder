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
    n <- readLn
    -- スペース区切り整数の入力
    l1 <- map strToInt . words <$> getLine
    l2 <- map strToInt . words <$> getLine
    -- 出力
    putStrLn $ show $ solve l1 l2 n
solve :: [Int] -> [Int] -> Int -> Int
solve l1 l2 n = last (ans!!1)
    where
        ans = [[dp k m | m <- [0..(n-1)]] | k <- [0,1]]
        dp 0 0 = l1!!0
        dp 1 0 = l1!!0 + l2!!0
        dp 0 m = dp 0 (m-1) + l1!!m
        dp 1 m = max (dp 0 m) (dp 1 (m-1)) + l2!!m
