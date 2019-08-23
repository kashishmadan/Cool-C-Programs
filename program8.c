/* ############################
You are given a sorted (either in
ascending or descending order) sequence
of numbers ending with -1. Output the number
of distinct elements in the sorted sequence
without using arrays.
#############################*/
#include <stdio.h>
int main() {

    int num,sum=0,prevnum;
    scanf("%d",&num);
    prevnum=num-1;
    while(num!=-1)
    {
       if(prevnum!=num)
       {
           sum++;
           prevnum=num;
       }
       scanf("%d",&num);
    }
    printf("%d",sum);
    return 0;
}
