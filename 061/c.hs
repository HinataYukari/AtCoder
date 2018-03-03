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
    [n, k] <- map strToInt . words <$> getLine
    ns <- replicateM n $ do
        [p, q] <- map strToInt . words <$> getLine
        return (p, q)
    -- 出力
    putStrLn $ show $ solve ns k 0

solve :: [(Int, Int)] -> Int -> Int -> Int
solve ((a, b):rest) k acc = if acc + b < k then solve rest k (acc+b) else a
