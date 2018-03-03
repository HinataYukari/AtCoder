import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [a, b, c, d] <- map strToInt . words <$> getLine
    let x = (max a c)
    let y = (min b d)
    -- 出力
    putStrLn . show $ if x > y then 0 else y - x
