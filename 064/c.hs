import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    n <- getLine
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    let ex = length $ filter (>= 3200) l
        ans = length . group . sort $ map (`div` 400) $ filter (< 3200) l
    -- 出力
    putStrLn $ show (max ans 1) ++ " " ++ show (ans + ex)
