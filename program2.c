/* #########################################################
Program to find if the number entered is a PERFECT number or not.
Perfect Number is a number which is equal to the sum of all its
divisible numbers for example- 6 is a perfect number because factors of
6 are 1,2 and 3.
6 = 1 + 2 + 3
######################################################### */

#include <stdio.h>
int main()
{
    int n,a=1,b=0;
    printf("Enter a number here: ");
    scanf("%d",&n);
    while(a<n)
    {
        if(n%a==0)
            b+=a;
        a++;
    }
    if(b==n)
        printf("\nIt is a PERFECT number!\n");
    else
        printf("\nIt is NOT a PERFECT number!\n");
return 0;
}
