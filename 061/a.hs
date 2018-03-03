import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO [()]
main = do
    -- スペース区切り整数の入力
    [n, m] <- map strToInt . words <$> getLine
    ns <- replicateM m $ do
        [p, q] <- map strToInt . words <$> getLine
        return (p, q)
    let answer = map (show . length) $ group . sort . concat $ map (\(x, y) -> [x, y]) ns
    -- 出力
    forM answer putStrLn
