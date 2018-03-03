import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    [h, w] <- map strToInt . words <$> getLine
    n <- readLn
    as <- map strToInt . words <$> getLine
    grid = [replicate as!!k k| k <- [1..n-1]]
    -- 出力
    forM_ grid putStrLn 
