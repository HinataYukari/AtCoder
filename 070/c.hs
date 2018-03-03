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
    ts <- map strToInt <$> replicateM n getLine
    -- 出力
    putStrLn . show $ foldl1' lcm ts
