import Control.Applicative
import Data.List
import Control.Monad
strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    [n, x] <- map strToInt . words <$> getLine
    s <- getLine
    ss <- replicateM n getLine
    -- 出力
    putStrLn $ show $ func s ss n x

func :: String -> String -> Int -> Int -> Int
func [] [] 0 _ = 0
func (a:as) (b:bs) n x = if (a == '0') || (x < read b)
            then (func as bs n x) + read b
            else (func as bs n x) + x
