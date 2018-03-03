import Control.Applicative
import Data.List
import Control.Monad
strToInteger s = (read :: String -> Integer) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [x, y] <- map strToInteger . words <$> getLine
    -- 出力
    putStrLn . show . length . takeWhile (<= y) $ zipWith (*) ([2^n | n <- [0,1..]]) (repeat x)
