import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b] <- map strToInt . words <$> getLine
    let g1 = [2]

    -- 出力
    putStrLn $ if (a == 2 && b == 2) || (a `elem` [4,6,9,11] && b `elem` [4,6,9,11]) || (a `elem` [1,3,5,7,8,10,12] && b `elem` [1,3,5,7,8,10,12])
                then "Yes" else "No"
