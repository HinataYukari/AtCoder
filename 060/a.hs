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
    [a, b, c] <- words <$> getLine
    -- 出力
    putStrLn $ if last a == head b && last b == head c then "YES" else "NO"
