import Control.Applicative
import Data.List
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    a <- getLine
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    -- 出力
    putStrLn $ show $ func l

func :: [Int] -> Int
dup :: Int -> Int
func xs = minimum [dup x | x <- xs]

dup a = if a `mod` 2 /= 0
            then 0
            else 1 + (dup (a `div` 2))
