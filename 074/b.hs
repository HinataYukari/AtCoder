import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    _ <- getLine
    k <- readLn
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    -- 出力
    putStrLn . show . sum $ map (\x -> (* 2) $ min x (k - x)) l
