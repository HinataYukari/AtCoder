main :: IO ()
main = do
    -- 整数の入力
    n <- readLn
    -- 出力
    putStrLn . show $ sum [1..n]
