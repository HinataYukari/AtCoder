import Control.Applicative
import Control.Monad
import Data.List
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    [a,b,c,d] <- map strToInt . concat . map words . lines <$> getContents
    -- 出力
    putStrLn $ if a == c || a == d || b == c || b == d then "YES" else "NO"
