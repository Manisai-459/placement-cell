#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100], ch[] = "!@#$^&*()-_=+[]{}|;:'\",.<>?/%%";
    printf("Enter string : ");
    scanf("%s", s);
    printf("Output string : ");
    int i, j = strlen(s) - 1;
    for (i = 0; i < strlen(s); i++)
    {
        if (strchr(ch, s[i]) == NULL)
        {
            if (strchr(ch, s[j]) == NULL)
                printf("%c", s[j]);
            else
            {
                j -= 1;
                while (strchr(ch, s[j]) != NULL)
                    j -= 1;
                printf("%c", s[j]);
            }
            j -= 1;
        }
        else
            printf("%c", s[i]);
    }
    return 0;
}