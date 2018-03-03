import Control.Applicative
import Data.List
import Control.Monad
strToInteger s = (read :: String -> Integer) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [n, h] <- map strToInteger . words <$> getLine
    ns <- replicateM (fromInteger n) $ do
        [a, b] <- map strToInteger . words <$> getLine
        return (a, b)
    -- 出力
    putStrLn . show $ func ns h

func :: [(Integer, Integer)] -> Integer -> Integer
func ns h = if sum bs' <= h then damage `div` amax + (fromIntegral . length $ filter (amax <) $ bs) + c
                            else fromIntegral . (+ 1) . length $ takeWhile (h >) $ scanl1 (+) bs'
    where
        amax = maximum $ map fst ns
        bs = map snd ns
        bs' = reverse . sort $ filter (amax <) bs
        damage = h - (sum bs')
        c = if damage `mod` amax == 0 then 0 else 1
