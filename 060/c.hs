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
    [n, t] <- map strToInteger . words <$> getLine
    -- スペース区切り整数の入力
    ts <- map strToInteger . words <$> getLine
    -- 出力
    putStrLn $ show $ solve ts t 0
solve :: [Integer] -> Integer -> Integer -> Integer
solve [t0] t acc = acc + t
solve (t0:t1:ts) t acc = if t0 + t < t1 then solve (t1:ts) t (acc+t) else solve (t1:ts) t (acc+t1-t0)
