import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe

main :: IO ()
main = do
    -- 文字列の入力
    s <- sort <$> getLine
    -- 出力
    putStrLn . show $ length (takeWhile (== 'g') s) - ((length s + 1) `div` 2)
