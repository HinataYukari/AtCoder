import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    r <- readLn
    g <- readLn
    -- 出力
    putStrLn $ show $ 2*g - r
