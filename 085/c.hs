import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, y] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn . (\[a, b, c] -> show a ++ " " ++ show b ++ " " ++ show c)$ (if null $ func n y then [-1, -1, -1] else head $ func n y)

func :: Int -> Int -> [[Int]]
func n y = [[a, b, c] | a <- [0..n], b <- [0..n], c <- [0..n], a + b + c == n, a * 1000 + b * 5000 + c * 10000 == y]
