import Control.Applicative
import Control.Monad
import Data.List
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- getLine
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    let l' = group $ sort l
    let len = map length l'
    let ls = zip (map head l') len
    -- 出力
    putStrLn . show $ solve ls

solve :: [(Int, Int)] -> Int
solve = foldl (\acc (x, y) -> if x > y then acc + y else acc + y - x) 0
