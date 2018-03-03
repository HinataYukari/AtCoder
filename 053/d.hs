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
    _ <- getLine
    -- スペース区切り整数の入力
    as <- sort . map strToInt . words <$> getLine
    -- 出力
    putStrLn . show $ solve as

solve :: [Int] -> Int
solve as = if even . length $ filter even newas then length newas else length newas - 1
    where newas = map ((\x -> if even x then 2 else 1) . length) $ group as
