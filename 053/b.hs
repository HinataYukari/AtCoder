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
    -- 文字列の入力
    s <- getLine
    let h = head $ elemIndices 'A' s
        t = last $ elemIndices 'Z' s
    -- 出力
    putStrLn . show $ t - h + 1
