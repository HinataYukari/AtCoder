import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToD s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, m] <- map strToD . words <$> getLine
    -- 出力
    putStrLn . show $ solve n m

solve :: Double -> Double -> Double
solve n m = min angle (360 - angle)
    where
        angle = abs $ fromIntegral (fromEnum n `mod` 12) * 30 + (m * 0.5) - m * 6
