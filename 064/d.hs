import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 文字列の入力
    n <- getLine
    s <- getLine
    let res = map sum $ inits $ map (\c -> if c == '(' then 1 else -1) s
        xmin = minimum res
        ds = last res
    putStrLn $ replicate (negate xmin) '(' ++ s ++ replicate (ds - xmin) ')'
