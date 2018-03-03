import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b] <- map strToInt . words <$> getLine

    -- 出力
    let x =  if odd (a + b) then (a + b + 1) `div` 2 else (a + b) `div` 2
    putStrLn $ show x
