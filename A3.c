#include<stdio.h>
int main()
{
    int a,i,r;
    printf("Enter number of column:");
    scanf("%d",&r);
    for(i=1; i<=r; i++)
    {
        for(a=1; a<=i+1; a++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
