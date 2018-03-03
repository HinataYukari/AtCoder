import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main = do
    -- 整数の入力
    n <- readLn
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    -- 出力
    forM (intersperse ' ' . concat . map show $ func $ solve n l []) putChar

func :: [a] -> [a]
func l = if odd $ length l then reverse l else id l

solve :: Int -> [Int] -> [Int] -> [Int]
solve n (a:as) b
    | null as = a:b
    | even n = solve (pred n) as (b ++ [a])
    | otherwise = solve (pred n) as (a:b)
