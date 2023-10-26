#include<stdio.h>
void main()
{
    int i,j,n=1;
    for(i=1;i<=5;i++)
    {
    for(j=i;j>=1;j--)
    {
        printf("%d ",n++);
    }
    printf("\n");
    }

}