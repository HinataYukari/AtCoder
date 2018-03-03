import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [h, w] <- map strToInt . words <$> getLine
    ls <- replicateM h $ do
        l <- words <$> getLine
        return (l)
    -- 出力
    putStrLn . show $ solve l h w
