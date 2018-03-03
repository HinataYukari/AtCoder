import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, x] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn . show $ min (x-1) (n-x)
