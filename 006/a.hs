main :: IO ()
main = do
    -- 整数の入力
    a <- readLn
    -- 出力
    putStrLn $ if (mod a 3 == 0) then "YES" else "NO"
