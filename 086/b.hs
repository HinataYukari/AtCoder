import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [b, c] <- words <$> getLine
    -- 出力
    putStrLn $ if (fromEnum (sqrt $ strToDouble (b++c))) ^ 2 == strToInt (b++c) then "Yes" else "No"
