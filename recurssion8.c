
#include <stdio.h>

void multiplication(int n, int i)
{
    if(i > 10)
        return;

    printf("%d x %d = %d\n", n, i, n * i);

    multiplication(n, i + 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    multiplication(n, 1);

    return 0;
}
