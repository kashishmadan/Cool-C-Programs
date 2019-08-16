/* #########################################################
Program to print a pattern like this
E D C B A
D C B A
C B A
B A
A starting from character ch
######################################################### */

#include <stdio.h>
int main()
{
    int n,i,j;
    char ch;
    printf("Enter a character from A-Z: ");
    scanf("%c",&ch);
        for(i=ch;i>=65;i--)
        {
            for(j=i;j>=65;j--)
                printf("%c ",j);
            printf("\n");
        }
    return 0;
}
