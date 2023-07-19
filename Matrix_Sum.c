#include<stdio.h>
int main()
{
    int N,M,A[20][20],B[20][20],C[20][20],i,j;
    printf("Enter Row & Colomn");
    scanf("%d%d",&N,&M);
    printf("Enter %d elements for First Matrix\n",M*N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter %d elements for second Matrix\n",M*N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("Sum of Matrix----->\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}