
#include <stdio.h>

int main()
{
    int a[100], n, i, j, min, temp;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;

    for(i = 0; i < n-1; i++)
    {
        min = i;

        for(j = i+1; j < n; j++)
        {
            if(*(p+j) < *(p+min))
            {
                min = j;
            }
        }

        if(min != i)
        {
            temp = *(p+i);
            *(p+i) = *(p+min);
            *(p+min) = temp;
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p+i));
    }

    return 0;
}
