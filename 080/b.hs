import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    a <- readLn
    -- スペース区切り整数の入力
    [b, c] <- map strToInt . words <$> getLine
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    -- kaigyousuuretu
    cs <- map strToInt <$> replicateM n getLine
    -- 文字列の入力
    s <- getLine
    -- 出力
    putStrLn $ show (a + b + c) ++ " " ++ s
