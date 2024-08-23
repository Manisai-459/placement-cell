def lru(n, l):
    s = []
    d = {}
    pf = 0
    for i in range(len(l)):
        if len(s)<n:
            if l[i] not in s:
                s.append(l[i])
                pf += 1
            d[l[i]] = i
        else:
            if l[i] not in s:
                lr = float('inf')
                index = 0
                for j in range(len(s)):
                    if d[s[j]]<lr:
                        lr = d[s[j]]
                        index = j
                s.pop(index)
                s.append(l[i])
                pf += 1
            d[l[i]] = i
    return pf



n = int(input("Enter capasity of main memory: "))
l = list(map(int, input("Enter space separated page numbers: ").split(' ')))
print(lru(n, l))

