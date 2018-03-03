import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 文字列の入力
    odds <- getLine
    evens <- getLine
    -- 出力
    putStrLn $ solve odds evens

solve :: String -> String -> String
solve [] _ = []
solve o [] = o
solve o e = (head o) : (head e) : (solve (tail o) (tail e))
