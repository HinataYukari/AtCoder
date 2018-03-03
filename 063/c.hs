import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    -- kaigyousuuretu
    ss <- map strToInt <$> replicateM n getLine
    let tens = filter ((== 0) . (`mod` 10)) ss
        ones = filter ((/= 0) . (`mod` 10)) ss
    if null ones then putStrLn "0"
                 else putStrLn $ if ((sum ones) `mod` 10 == 0) then show $ (sum ss - minimum ones) else show $ sum ss
