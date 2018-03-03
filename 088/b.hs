import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    n <- getLine
    -- スペース区切り整数の入力
    ls <-reverse . sort . map strToInt . words <$> getLine
    let alice =  sum $ map fst $ filter (odd . snd) (zip ls [1..])
        bob   =  sum $ map fst $ filter (even . snd) (zip ls [1..])
    -- 出力
    putStrLn . show $ alice - bob
