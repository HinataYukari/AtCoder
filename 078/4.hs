import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    [n, z, w] <- map strToInt . words <$> getLine
    -- スペース区切り整数の入力
    l <- take 2 <$> reverse . map strToInt . words <$> getLine
    let ans1 = max (abs ((head l) - w)) (abs ((head $ tail l) - head l))
    let ans2 = abs $ l!!0 - w
    -- 出力
    putStrLn . show $ if length l > 1 then ans1 else ans2
