main=interact$foldl(\a c->if c=='B'then take(length a-1)a else a++[c])[]
