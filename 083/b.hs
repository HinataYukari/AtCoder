import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, a, b] <- map strToInt . words <$> getLine

    putStrLn . show . sum $ filter (\n ->(sumOfDs n) >= a && (sumOfDs n) <= b) [1..n]

sumOfDs :: Int -> Int
sumOfDs n = sum . map (`mod` 10) $ zipWith div (repeat n) [10^a | a <- [0..4]]
