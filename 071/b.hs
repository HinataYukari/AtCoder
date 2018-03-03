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
    s <- getLine
    let l = ['a'..'z'] \\ (map head $ group $ sort s)
    -- 出力
    if null l then putStrLn "None" else putChar $ head l
