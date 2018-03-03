import Control.Applicative
import Control.Monad
import Data.List
import Data.Char

main :: IO [()]
main = do
    cs <- reverse <$> replicateM 4 getLine
    -- 出力
    forM cs $ putStrLn . reverse
