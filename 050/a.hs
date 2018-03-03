import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b, c] <- words <$> getLine
    -- 出力
    putStrLn . show $ (if b == "+" then (read a) + (read c) else (read a) - (read c))
