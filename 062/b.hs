import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [h, w] <- map strToInt . words <$> getLine
    -- kaigyousuuretu
    cs <- replicateM h getLine
    -- 出力
    putStrLn $ replicate (w + 2) '#'
    forM cs (putStrLn . (\x -> ['#'] ++ x ++ ['#']))
    putStrLn $ replicate (w + 2) '#'
