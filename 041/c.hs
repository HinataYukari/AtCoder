import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 文字列の入力
    _ <- getLine
    -- スペース区切り整数の入力
    students <- map strToInt . words <$> getLine
    let order = map (show . snd) . reverse . sort $ zip students [1..]
    -- 出力
    mapM_ putStrLn order
