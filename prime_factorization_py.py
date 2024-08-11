n = int(input())
l = [-1] * (n+1)
l[0] = -1
l[1] = -1
for i in range(2,(int)(n ** 0.5)+1):
    if l[i] == -1:
        l[i] = i
        for j in range(i*i,n+1,i):
            if l[j] == -1:
                l[j] = i
while n != 1:
    if l[n] == -1:
        print(n)
        n /= n
    else:
        print(l[n], end=" x ")
        n //= l[n]