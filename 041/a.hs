main = do
    -- 文字列の入力
    s <- getLine
    i <- read <$> getLine
    -- 出力
    putChar $ s!!(i-1)
