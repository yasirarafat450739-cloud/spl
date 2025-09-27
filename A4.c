#include <stdio.h>
int main()
{
    int n,i,a,s;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)    // loop for rows //dfdsfkldsjflksdjflksdjfsdljf
    {
        // print spaces
        for(s=1; s<=n-i; s++)


    {
            printf(" ");
        }
        // print stars
        for(a=1; a<=2*i-1; a++)
        {
            printf("*");
        }

        printf("\n"); // move to next row
        printf("kamran");
    }

    return 0;
}
