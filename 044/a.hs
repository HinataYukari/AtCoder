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
    [n, k, x, y] <- map strToInt . lines <$> getContents
    -- 出力
    putStrLn . show $ (min k n) * x + (max 0 (n-k)) * y
