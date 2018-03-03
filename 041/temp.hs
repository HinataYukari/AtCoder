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
    -- 整数の入力
    a <- readLn
    -- スペース区切り整数の入力
    [b, c] <- map strToInt . words <$> getLine
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    -- 改行数列
    cs <- map strToInt <$> replicateM n getLine
    ns <- replicateM n $ do
        [p, q] <- map strToInteger . words <$> getLine
        return (p, q)
    -- 文字列の入力
    s <- getLine
    -- 出力
    putStrLn $ show (a + b + c) ++ " " ++ s
