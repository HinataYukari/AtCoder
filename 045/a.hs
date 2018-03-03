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
    a <- strToInt <$> getLine
    b <- strToInt <$> getLine
    h <- strToInt <$> getLine
    -- 出力
    putStrLn . show $ (a + b) * h `div` 2
