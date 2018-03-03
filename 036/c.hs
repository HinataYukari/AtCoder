import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

-- TLE
main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    -- 改行数列
    as <- map strToInt <$> replicateM n getLine
    let ziped = zip (sort $ zip as [1..n]) [0..(n-1)]
    -- 出力
    mapM_ putStrLn $ map (show . snd) . sort . map (\(x, y) -> (y, x)) $
        foldl (\acc ((x, y), z) -> if (x == (fst.fst$ziped!!(z-1)))
                then (fst $ head acc, y):acc
                else (succ . fst $ head acc, y):acc)
                [(0, snd . fst $ head ziped)]  (tail ziped)
