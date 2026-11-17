#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[50];
    char *p, *q;
    int pos = 1, found = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    for (p = str; *p != '\0'; p++, pos++)
    {
        q = sub;
        char *temp = p;

        while (*temp == *q && *q != '\0')
        {
            temp++;
            q++;
        }

        if (*q == '\0')
        {
            printf("Substring found at position %d", pos);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Substring not found");

    return 0;
}