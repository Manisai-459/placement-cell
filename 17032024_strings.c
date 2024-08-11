#include <stdio.h>
#include <string.h>
int main()
{
    int arr[127] = {0};
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    int n;
    printf("Enter number of friends : ");
    scanf("%d", &n);
    char names[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("\nFriend %d:\n");
    }

    return 0;
}