import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- getLine
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    putStrLn $ show $ (maximum l) - (minimum l)
