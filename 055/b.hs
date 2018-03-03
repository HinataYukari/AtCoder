import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main = do
    -- 整数の入力
    a <- strToInteger <$> getContents
    let m = 10 ^ 9 + 7
    -- 出力
    putStrLn . show . flip mod m $ product $ map (flip mod m) [1..a]
