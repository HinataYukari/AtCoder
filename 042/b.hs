import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO [()]
main = do
    -- スペース区切り整数の入力
    [n, l] <- map strToInt . words <$> getLine
    cs <- sort <$> replicateM n getLine
    -- 出力
    forM cs putStr
