import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    m <- readLn
    -- 出力
    putStrLn . show $ 48 - m
