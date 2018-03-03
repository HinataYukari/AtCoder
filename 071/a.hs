import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [x, a, b] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn $ if abs (x-a) < abs (x-b) then "A" else "B"
