import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b] <- map strToInt . words <$> getLine
    let soloPoker = 1 : [13,12..2]
        aliceHand = fromJust $ elemIndex a soloPoker
        bobHand = fromJust $ elemIndex b soloPoker
    -- 出力
    putStrLn $ case compare aliceHand bobHand of
        LT -> "Alice"
        EQ -> "Draw"
        GT -> "Bob"
