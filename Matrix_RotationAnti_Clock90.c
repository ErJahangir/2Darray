#include<stdio.h>
int main()
{
    int i,j;
    int a,b,arr[20][20];
    printf("Enter the value of a & b");
    scanf("%d %d",&a,&b);
    printf("Enter %d numbers",a*b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=a-1;i>=0;i--)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}