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
    as <- sort . map strToInt . words <$> getLine
    -- 出力
    putStrLn . show $ solve as

solve :: [Int] -> Int
solve as = if null sums then (if length ls == 1 then head ls else (if abs (head as - last as) <= 2 then length as else max (head ls) (last ls))) else maximum sums where
    ls = map length $ group as
    sums = zipWith3 (\a b c -> a + b + c) ls (tail ls) (tail $ tail ls)
