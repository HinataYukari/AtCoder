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
    [a, b, c] <- sort <$> map strToInt . words <$> getLine
    -- 出力
    putStrLn $ if a == 5 && b == a && c == 7 then "YES" else "NO"
