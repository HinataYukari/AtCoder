import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, k] <- map strToInt . words <$> getLine
    -- スペース区切り整数の入力
    l <- reverse . sort <$> map strToInt . words <$> getLine
    -- 出力
    putStrLn . show . sum $ take k l
