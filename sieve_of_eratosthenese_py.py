n,m =list(map(int,input().split()))
l = [1]*(m+1)
l[0] = 0
l[1] = 0
for i in range(2,(int)(m ** 0.5) + 1):
    if l[i] == 1:
        for j in range(i*i,m+1,i):
            l[j] = 0
for i in range(n,m+1):
    if l[i] :
        print(i)

    