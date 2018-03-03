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
    putStrLn . show $ solve x

solve x
    | m == 0 = 2 * d
    | m <= 6 = 2 * d + 1
    |otherwise = 2 * d + 2
    where m = mod x 11
          d = div x 11
