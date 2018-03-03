import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, d] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn . show $ (succ $ min a d) * (max a d)
