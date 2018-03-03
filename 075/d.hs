import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, m] <- map strToInt . words <$> getLine
    routs <- replicateM m $ do
        (p, q) <- map strToInteger . words <$> getLine
        return (p, q)
    -- 出力
    putStrLn $ show solve routs

solve :: [(Int, Int)] -> Int
