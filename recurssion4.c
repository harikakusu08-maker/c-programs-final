
#include <stdio.h>

int linearSearch(int a[], int n, int key, int i)
{
    if(i == n)
        return -1;

    if(a[i] == key)
        return i;

    return linearSearch(a, n, key, i + 1);
}

int main()
{
    int a[100], n, key, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = linearSearch(a, n, key, 0);

    if(pos == -1)
        printf("Element not found");
    else
        printf("Element found at position %d", pos + 1);

    return 0;
}
