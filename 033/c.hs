import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe

splitBy :: (a -> Bool) -> [a] -> [[a]]
splitBy p [] = []
splitBy p xs = a : (splitBy p $ dropWhile p $ b)
    where (a, b) = break p xs

main :: IO ()
main = do
    -- 文字列の入力
    s <- getLine
    -- 出力
    putStrLn . show . sum . map (\xs -> if '0' `elem` xs then 0 else 1) $ splitBy (== '+') s
