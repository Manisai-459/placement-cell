#include <stdio.h>
int main()
{
    int n1;
    printf("Enter n : ");
    scanf("%d", &n1);
    int n = n1, d, sum = 0, len = 0, p = 1, i;
    while (n)
    {
        n = n / 10;
        len += 1;
    }
    n = n1;
    while (n)
    {
        d = n % 10;
        n = n / 10;
        p = 1;
        for (i = 0; i < len; i++)
            p *= d;
        sum += p;
    }
    if (sum == n1)
        printf("ARMSTRONG NUMBER");
    else
        printf("NOT AN ARMSTRONG NUMBER");
}