import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- 整数の入力
    -- スペース区切り整数の入力
   [a, b, c, d, e, f] <- map strToDouble . words <$> getLine
   let (_, ans1, ans2) = last $ sort [((c*i''+d*i''') / ((a*i+b*i')*100+c*i''+d*i'''),(a*i+b*i')*100+c*i''+d*i''',c*i''+d*i''') | i <- [0..f/(100*a)], i' <- [0..f/(100*b)], i'' <- [0..f/c], i''' <- [0..f/d], (a*i+b*i')*100+c*i''+d*i''' <= f, (a*i+b*i')*100*e >= c*i''+d*i'']
   -- 出力
   putStr . show $ fromEnum ans1
   putChar ' '
   putStrLn . show $fromEnum ans2
