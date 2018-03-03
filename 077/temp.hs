import Control.Applicative
import Data.List
import Control.Monad
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
    ns <- replicateM n $ do
        [p, q] <- map strToInteger . words <$> getLine
        return (p, q)
    -- 文字列の入力
    s <- getLine
    -- 出力
    putStrLn $ show (a + b + c) ++ " " ++ s
