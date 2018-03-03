import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    -- kaigyousuuretu
    cs <- map strToInt <$> replicateM n getLine
    -- 出力
    putStrLn . show . length $ qsort cs

qsort :: (Ord a) => [a] -> [a]
qsort [] = []
qsort (x:xs) = qsort sm ++ [x] ++ qsort la
    where
        sm = [a | a <- xs, a < x]
        la = [b | b <- xs, b > x]
