import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    -- kaigyousuuretu
    cs <- map strToInt <$> replicateM n getLine
    -- 出力
    putStrLn $ show . sum . map (\x -> if odd x then 1 else 0) . map length . group $ sort cs
