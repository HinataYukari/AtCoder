import Control.Applicative

main :: IO ()
main = do
    s <- getLine
    let c = sum [1 | x <- s, x == '1']
    -- 出力
    putStrLn $ show c
