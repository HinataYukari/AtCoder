import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    cs <- replicateM 12 getLine
    -- 出力
    putStrLn . show . sum $ map (\c -> if 'r' `elem` c then 1 else 0) cs
