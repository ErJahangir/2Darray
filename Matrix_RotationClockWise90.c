#include <stdio.h>
int main()
{
    int i, j, a, b;
    int arr[20][20];
    printf("Enter the value of i & j");
    scanf("%d%d", &a, &b);
    printf("Enter %d values", a * b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (j = 0; j < a; j++)
    {
        for (i = b - 1; i >=0; i--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}