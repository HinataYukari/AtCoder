import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import Data.Maybe
import qualified Data.Map as M
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    ns <- replicateM n $ do
        [p, q] <- words <$> getLine
        return (read q, p)
    let population = sum $ map fst ns
        populationMax = maximum $ map fst ns
        populationMap = M.fromList ns
    -- 出力
    putStrLn $ if populationMax * 2 > population then fromJust $ M.lookup populationMax populationMap else "atcoder"
