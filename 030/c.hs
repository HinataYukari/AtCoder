import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    [n, a] <- map strToInt . words <$> getLine
    k <- readLn
    -- スペース区切り整数の入力
    bs <- map strToInt . words <$> getLine
    -- 出力
    putStrLn $ solve n k a bs

makeLoop :: Int -> Int -> [Int] -> [Int]
makeLoop 0 i bs = [bs!!i]
makeLoop n i bs = (bs!!i):(makeLoop (n-1) bs!!i bs)

findLoop :: Int -> [Int] ->
findLoop n ixs = foldl' (\acc x -> acc ) [0..(n-1)]

solve :: Int -> Int -> Int -> [Int] -> Int
solve n k bs = (makeLoop n a bs)!!(k `mod` n)
    where
