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
    [w, a, b] <- map strToInt . words <$> getLine
    let mini = min a b
        maxi = max a b
    -- 出力
    putStrLn $ show $ max 0 (maxi - mini - w)
