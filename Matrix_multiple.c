#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20];
    int m,n;
    printf("Enter the value of m & n");
    scanf("%d%d",&m,&n);
    printf("Enter %d numbers for A",m*n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter %d numbers for b",m*n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            {
                for(int k=0;k<n;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j]; 
                }
            }
        }
        printf("\n");
    }
    printf("Multipled Matrix \n");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}