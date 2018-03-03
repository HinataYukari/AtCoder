import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    ls <- replicateM n $ do
        [p, q] <- map strToInt. words <$> getLine
        return (p, q)
    -- 出力
    putStrLn . show . sum $ map (\(l, r) -> r - l + 1) ls
