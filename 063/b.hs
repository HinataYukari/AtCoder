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
    -- 出力
    putStrLn $ if all ((== 1) . length) $ group $ sort s then "yes" else "no"
