/* #########################################################
Program to print a pattern like this
A
A B
A B C
A B C D
A B C D E up to character ch
######################################################### */\

#include <stdio.h>
int main()
{
    int n,i,j;
    char ch;
    printf("Enter a character from A-Z: ");
    scanf("%c",&ch);
        for(i=65;i<=ch;i++)
        {
            for(j=65;j<=i;j++)
                printf("%c ",j);
            printf("\n");
        }
    return 0;
}
