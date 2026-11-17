
#include <stdio.h>

int main()
{
    char str[100], ch;
    char *p;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    p = str;

    for(i = 0; *(p+i) != '\0'; i++)
    {
        if(*(p+i) == ch)
        {
            printf("Character found at position %d", i+1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Character not found");
    }

    return 0;
}

