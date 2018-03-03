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
    [n, a, b] <- map strToInteger . words <$> getLine
    -- kaigyousuuretu
    hs <- map strToInteger <$> replicateM (fromInteger n) getLine
    -- 出力
    putStrLn . show $ solve (reverse $ sort hs) a b 0

solve :: [Integer] -> Integer -> Integer -> Integer -> Integer
solve [] a b k = k
solve hs a b k = let newhs = filter (> 0) $ (head hs - a) : map (flip (-) b) (tail hs) in
                    solve (reverse $ sort newhs) a b (k + 1)
