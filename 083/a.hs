import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b, c, d] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn $ output a b c d
        where
            output a b c d
                | (a + b) > (c + d) = "Left"
                | (a + b) == (c + d)= "Balanced"
                | otherwise = "Right"
