import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 文字列の入力
    ss <- getLine
    ts <- getLine
    -- 出力
    putStrLn $ solve ss ts

isPre :: String -> String -> Bool
isPre _ [] = True
isPre [] _ = False
isPre (s:ss) (t:ts) = if s == '?' || s == t then isPre ss ts else False

replace :: String -> String -> String -> String
replace ss ts c = map (\x -> if x == '?' then 'a' else x) (present ++ ts ++ latter)
    where
        k = length c
        present = take (length ss - k) ss
        latter  = drop (length present + length ts) ss

solve :: String -> String -> String
solve ss ts = if null cands then "UNRESTORABLE" else minimum $ map (replace ss ts) cands
    where
        cands = filter (flip isPre ts) (tails ss)
