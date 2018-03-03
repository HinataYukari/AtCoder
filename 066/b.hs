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
    s <- getLine
    -- 出力
    putStrLn . show $ solve (init s)

solve :: String -> Int
solve s = if odd l then solve (init s) else (if take (div l 2) s == drop (div l 2) s then l else solve (take (l-2) s))
    where
        l = length s
