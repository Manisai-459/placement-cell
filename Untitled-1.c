#include <stdio.h>

int main()

{

    int n, i, c;
    scanf("%d", &n);
    c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c == 2)
        printf("prime");
    else
        printf("not prime");

    return 0;
}