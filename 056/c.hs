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
    x <- readLn
    -- 出力
    putStrLn . show . succ . length $ takeWhile (< x) $ scanl1 (+) [1..]
