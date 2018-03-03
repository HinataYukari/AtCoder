import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 文字列の入力
    s <- getLine
    [gx, gy] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn $ solve (filter (`elem` ['T','F']) s) (0, 0) (gx, gy)

solve :: String -> (Int, Int) -> (Int, Int) -> String
solve [] (nx, ny) (gx, gy) = if nx == gx && ny == gy then "Yes" else "No"
solve (s:ss) (nx, ny) (gx, gy) = case s of
    'T' -> if ny <= gy then solve ss (ny, nx) (gy, gx) else solve ss (gy, nx) (ny, gx)
    'F' -> solve ss (nx+1, ny) (gx, gy)
