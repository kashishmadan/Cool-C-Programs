/* #########################################################
Program to print a pattern like this
    *
   **
  * *
 *  *
*****
######################################################### */
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n; i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            if(j==0 || i==n-1 || j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
