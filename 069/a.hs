import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, m] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn . show $ (n-1) * (m-1)
