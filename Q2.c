#include<stdio.h>
void product(int a[][3],int b[][3])
{
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[3][3]=0;
            for(int k=0;k<3;j++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}
int main()
{
    int a[3][3],b[3][3];
    printf("Enter 9 numbers for first matrics");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 9 numbers for second matrics");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    product(a,b);
}