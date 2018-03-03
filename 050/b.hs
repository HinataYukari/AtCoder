import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    _ <- getLine
    -- スペース区切り整数の入力
    ts <- map strToInt . words <$> getLine
    m <- readLn
    -- 改行数列
    ns <- replicateM m $ do
        [p, q] <- map strToInt . words <$> getLine
        return (p, q)
    let s = sum ts
        ans = map (\a -> s - (ts !! (fst a - 1)) + (snd a)) ns
    -- 出力
    mapM_ (putStrLn . show) ans
