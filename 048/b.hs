import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInteger s = (read :: String -> Integer) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b, x] <- map strToInteger . words <$> getLine
    -- 出力
    putStrLn . show $ b `div` x - (a-1) `div` x
