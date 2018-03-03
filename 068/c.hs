import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
import qualified Data.Map as Map

strToInt s = (read :: String -> Int) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, m] <- map strToInt . words <$> getLine
    ab <- replicateM m $ do
        [a, b] <- map strToInt . words <$> getLine
        return (a, b)
    let ships = Map.fromList ab
    []
    -- 出力
    putStrLn $ if solve start goal then "POSSIBLE" else "IMPOSSIBLE"

solve :: [(Int, Int)] -> [(Int, Int)] -> Bool
solve start goal = or [(snd s) == (fst g) | s <- start, g <- goal]
