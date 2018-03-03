import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b] <- map strToInt . words <$> getLine
    -- 文字列の入力
    s <- getLine
    -- 出力
    putStrLn $ solve s a b

numJudge :: Char -> Bool
numJudge c = ord c >= ord '0' && ord c <= ord '9'


solve :: String -> Int -> Int -> String
solve s a b = if s!!a == '-' && all numJudge (delete '-' s) then "Yes" else "No"
