import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    -- スペース区切り整数の入力
    as <- map strToInteger . words <$> getLine
    -- 出力
    putStrLn . show $ solve as n (take n $ sort as)
    putStrLn "Debug"

solve :: [Integer] -> Int -> [Integer] -> Integer
solve as n tempsum = maximum [results k tempsum | k <- [n..2*n]] where
    results k tempsum = let heads = sum . take n $ reverse . sort $ take k as
                            lasts = sum . take n $ sort $ drop k as
                            in heads - lasts
