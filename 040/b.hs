import Control.Applicative
import Control.Monad
import Data.List

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    let ans = minimum $ map (\x -> abs (x - (n `div` x)) + (n - (n `div` x) * x)) [1..n]
    -- 出力
    putStrLn . show $ ans
