#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m;
    printf("Enter how many row and colomn you want");
    scanf("%d%d",&n,&m);
    printf("Enter %d numbers for first matrics",n*m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter %d numbers for first matrics",n*m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            printf("%d",c[i][j]); 
            else 
            printf(" ");  
        }
        printf("\n");
    }
}