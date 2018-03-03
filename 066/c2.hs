import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    len <- readLn
    -- スペース区切り整数の入力
    as <- map strToInt . words <$> getLine
    let os = map (show . fst) $ filter (\(x, y) -> odd  y) $ zip as [1..len]
    let es = map (show . fst) $ filter (\(x, y) -> even y) $ zip as [1..len]
    if len == 1 then print $ head as
        else if even len then putStrLn $ (unwords $ reverse $ es) ++ " " ++ (unwords os)
                else putStrLn $ (unwords $ reverse os) ++ " " ++ (unwords es)
