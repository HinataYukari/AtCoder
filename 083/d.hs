import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    s <- init <$> tail <$> getLine
    -- 出力
    putStrLn . show . maximum . map length $ group s
