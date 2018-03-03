import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 文字列の入力
    s1 <- getLine
    s2 <- getLine
    -- 出力
    putStrLn $ if s1 == reverse s2 then "YES" else "NO"
