import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe

main :: IO ()
main = do
    -- 文字列の入力
    sa <- filter (`elem` ['a'..'c']) <$> getLine
    sb <- filter (`elem` ['a'..'c']) <$> getLine
    sc <- filter (`elem` ['a'..'c']) <$> getLine
    -- 出力
    putStrLn $ solve sa sb sc 'a'

solve :: String -> String -> String -> Char -> String
solve [] _ _ 'a' = "A"
solve _ [] _ 'b' = "B"
solve _ _ [] 'c' = "C"
solve (a:sa) sb sc 'a' = solve sa sb sc a
solve sa (b:sb) sc 'b' = solve sa sb sc b
solve sa sb (c:sc) 'c' = solve sa sb sc c
