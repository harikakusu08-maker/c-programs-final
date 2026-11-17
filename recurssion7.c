
#include <stdio.h>

int isPrime(int n, int i)
{
    if(n <= 1)
        return 0;

    if(i > n / 2)
        return 1;

    if(n % i == 0)
        return 0;

    return isPrime(n, i + 1);
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = isPrime(n, 2);

    if(result == 1)
        printf("%d is a Prime number", n);
    else
        printf("%d is Not a Prime number", n);

    return 0;
}
