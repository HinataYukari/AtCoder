import Control.Applicative
import Data.List

strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- 整数の入力
    [b, c] <- map read . words <$> getLine
    -- スペース区切り整数の入力
    l <- map strToInt . words <$> getLine
    let l' = map length $ group $ sort l
    let l'' = sort l'
    -- 出力
    putStrLn $ show . sum $ take (length l'' - c) l''
