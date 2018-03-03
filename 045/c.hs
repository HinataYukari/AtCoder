import Control.Applicative
import Control.Monad
import Data.List

main :: IO ()
main = do
    -- 文字列の入力
    s <- filter (`elem` ['0'..'9']) <$> getLine
    let ps = subsequences [1..(length s - 1)]
    -- 出力
    putStrLn . show $ solve s ps

solve :: String -> [[Int]] -> Integer
solve s = sum . map (sum . map read . mulSplit s)

mulSplit :: String -> [Int] -> [String]
mulSplit s [] = [s]
mulSplit s (i:ix) = (take i s) : (mulSplit (drop i s) (map (subtract i) ix))
