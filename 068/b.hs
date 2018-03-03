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
    a <- readLn
    -- 出力
    putStrLn . show $ solve a

solve :: Int -> Int
solve a = (^) 2 (pred . length $ takeWhile (<= a) [2 ^ k | k <- [0..]])
