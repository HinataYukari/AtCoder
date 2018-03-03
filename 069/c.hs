import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    -- 出力
    putStrLn $ solve l n

solve :: [Int] -> Int -> String
solve l n = if lf >= lo - 1 + c then "Yes" else "No"
    where
        fours = filter ((== 0) . flip mod 4) l
        ones  = filter ((== 1) . flip mod 2) l
        lf = (length fours)
        lo = (length ones)
        c = if n == lf + lo then 0 else 1
