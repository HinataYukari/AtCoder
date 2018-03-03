import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    [n, k] <- map strToInt . words <$> getLine
    l <- getLine
    let likes = ['0'..'9'] \\ l
    -- 出力
    putStrLn $ solve likes n

solve :: String -> Int -> String
solve likes n = if and (map (`elem` likes) strn) then strn else solve likes (n+1)
    where strn = show n
