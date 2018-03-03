import Control.Applicative
import Control.Monad
import Data.List
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [w, h] <- map strToInt . words <$> getLine
    let m = gcd w h
    case w `div` m of
        4 -> putStrLn "4:3"
        16 -> putStrLn "16:9"
        otherwise -> undefined
