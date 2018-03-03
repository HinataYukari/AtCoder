import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- スペース区切り整数の入力
    [h, w] <- map strToInt . words <$> getLine
    -- 出力
    putStrLn . show $ min (solve h w) (solve w h)

solve :: Int -> Int -> Int
solve h w = if ((h `mod` 3) == 0 || (w `mod` 3) == 0)
            then 0
            else min ver hor where
                ver = minimum [let chocor = map (* w) [k, (h-k) `div` 2, (h-k) - (h-k) `div` 2] in (maximum chocor - minimum chocor) | k <- [1..h-1]]
                hor = minimum [let chocos = [k * w, (h-k) * (w `div` 2), (h-k) * (w - w `div` 2)] in (maximum chocos - minimum chocos) | k <- [1..h-1]]
