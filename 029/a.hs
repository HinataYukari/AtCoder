import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    s <- getLine
    -- 出力
    putStrLn $ s ++ ['s']
