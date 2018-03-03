import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [b, c] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn $ if ((b `mod` 3) == 0 || (c `mod` 3) == 0 || ((b+c) `mod` 3) == 0) then "Possible" else "Impossible"
