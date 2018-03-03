import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

roundUpOn5 :: (RealFrac a, Integral b) => a -> b
roundUpOn5 x
  | n <= -0.5 = m - 1
  | n >= 0.5 = m + 1
  | otherwise = m
  where (m, n) = properFraction x

main :: IO ()
main = do
    -- 整数の入力
    _ <- getLine
    -- スペース区切り整数の入力
    as <- map strToInt . words <$> getLine
    let ave = roundUpOn5 $ (sum as) / (fromIntegral $ length as)
    -- 出力
    putStrLn . show $ foldl (\acc x -> acc + (x - ave) ^ 2) 0 as
