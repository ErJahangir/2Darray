#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter value of m & n");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter %d numbers",m*n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}