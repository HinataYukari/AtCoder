import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, m] <- map strToInteger . words <$> getLine
    -- 出力
    putStrLn . show $ solve n m

solve :: Integer -> Integer -> Integer
solve n m = if n * 2 > m
    then m `div` 2
    else n + ((m - 2 * n) `div` 4)
