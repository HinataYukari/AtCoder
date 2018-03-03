import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 文字列の入力
    _ <- getLine
    s <- getLine
    -- 出力
    putStrLn . show $ max 0 $ maximum $ scanl (\acc c -> if c == 'I' then succ acc else pred acc) 0 s
