#include<stdio.h>
int main()
{
 int n,i,j,k=0;
    printf("enter no of rows:");
    scanf("%d",&n);
    int a[n][n],p[n][n];
    printf("enter matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {p[i][j]=-1;
            scanf("%d",&a[i][j]);

        }
    }
    while(k!=n)
    {
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    if((a[i][j]==1)||((a[i][k]==1)&&(a[k][j]==1)))
    {
    p[i][j]=1;
    }
    }
    }
    k++;
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {
    if(p[i][j]!=-1)
    {
    a[i][j]=p[i][j];
    p[i][j]=-1;
    }
    }}}

        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }}
