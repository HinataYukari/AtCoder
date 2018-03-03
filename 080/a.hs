import Control.Applicative
import Control.Monad
import Data.List
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b, c] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn . show $ min (a * b) c
