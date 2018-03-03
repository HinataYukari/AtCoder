main :: IO ()
main = do
    -- 文字列の入力
    s <- getLine
    -- 出力
    case take 12 s of
            "WBWBWWBWBWBW" -> putStrLn "Do"
            "WBWWBWBWBWWB" -> putStrLn "Re"
            "WWBWBWBWWBWB" -> putStrLn "Mi"
            "WBWBWBWWBWBW" -> putStrLn "Fa"
            "WBWBWWBWBWWB" -> putStrLn "So"
            "WBWWBWBWWBWB" -> putStrLn "La"
            "WWBWBWWBWBWB" -> putStrLn "Si"
            otherwise -> undefined
