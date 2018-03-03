import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    k <- readLn
    -- 出力
    putStrLn $ show $ solve n k

solve :: Int -> Int -> Int
solve 0 k = 1
solve n k = if 2 ^ (n-1) > k then k + solve (n-1) k else 2 * solve (n-1) k
