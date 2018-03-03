import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    a <- getLine
    -- 出力
    putStrLn $ if a == reverse a then "Yes" else "No"
