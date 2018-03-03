import Control.Applicative
import Control.Monad
import Data.List
import Data.Char
strToInt s = (read :: String -> Int) s
strToInteger s = (read :: String -> Integer) s
strToDouble s = (read :: String -> Double) s

main :: IO ()
main = do
    -- kaigyousuuretu
    cs <- interact $ fst . words
    let fs = cs!!0
        sn = cs!!1
    if (length fs) == (length sn)
        then putStrLn $ solve fs sn
        else case compare (length fs) (length sn) of
            LT -> putStrLn "LESS"
            EQ -> putStrLn "EQUAL"
            GT -> putStrLn "GREATER"

solve :: String -> String -> String
solve [] [] = "EQUAL"
solve [] _ = "LESS"
solve _ [] = "GREATER"
solve (f:fs) (s:sn) = case compare f s of
    GT -> "GREATER"
    LT -> "LESS"
    EQ -> solve fs sn
