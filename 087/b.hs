import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    a <- readLn
    b <- readLn
    c <- readLn
    p <- readLn
    -- 出力
    putStrLn $ show $ length [1 | x <- [0..a], y <- [0..b], z <- [0..c], 500*x+100*y+50*z == p]
