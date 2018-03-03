import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInteger s = (read :: String -> Integer) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b, c] <- map strToInteger . words <$> getLine
    let m = 10^9+7
    -- 出力
    putStrLn . show $ (a * b * c) `mod` m
