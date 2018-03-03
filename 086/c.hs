import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    ps <- replicateM n $ do
        [t, x, y] <- map strToInt . words <$> getLine
        return (t, x, y)
    -- 出力
    putStrLn $ if solve (0,0,0) ps then "Yes" else "No"

solve :: (Int, Int, Int) -> [(Int, Int, Int)] -> Bool
solve _ [] = True
solve (t0, x0, y0) ((t1, x1, y1):ps) = (solve (t1, x1, y1) ps) && (even (t0 + t1) == even (x0 + x1 + y0 + y1) && (t1 - t0) >= (abs(x0 - x1) + abs(y0 - y1)))
