import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
strToInt s = (read :: String -> Int) s

main = do
    [h, w] <- map strToInt . words <$> getLine
    cs <- replicateM h getLine
    mapM (mapM putStrLn) $ map (replicate 2) cs
