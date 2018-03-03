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
    l <- sort . map strToInt . words <$> getLine
    -- 出力
    putStrLn $ if l!!0 + l!!1 == l!!2 then "Yes" else "No"
