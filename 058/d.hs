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
    -- スペース区切り整数の入力
    xaxis <- map strToInteger . words <$> getLine
    yaxis <- map strToInteger . words <$> getLine
    let x = sum $ zipWith (\x k ->flip mod moD $ (2*k - n - 1) * x) xaxis [1..]
        y = sum $ zipWith (\y k ->flip mod moD $ (2*k - m - 1) * y) yaxis [1..]
        moD = 10^9 + 7
    -- 出力
    putStrLn . show $ (x * y) `mod` moD
