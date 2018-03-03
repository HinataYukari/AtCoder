import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToD s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b, c, d] <- map strToD . words <$> getLine
    -- 出力
    putStrLn $ func a b c d

func :: Double -> Double -> Double -> Double -> String
func a b c d
    | b / a < d / c = "AOKI"
    | b / a == d / c = "DRAW"
    | otherwise = "TAKAHASHI"
