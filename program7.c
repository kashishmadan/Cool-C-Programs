/* #################################
A C program to guess a random number.
###################################*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int random_genNo=0,count=0,num;
    int stime;
    long ltime;

    //initialise srand with current time, to get random number on every run
    ltime = time(NULL);
    stime = (unsigned) ltime/2;
    srand(stime);

    //generate random number
    random_genNo=rand()%1000;

    //run infinite loop
    while(1)
    {
        //increase counter
        count+=1;

        //read number from user
        printf("\n\nGuess a number from (0 to 1000): ");
        scanf("%d",&num);

        //compare entered number with generated number

        if(random_genNo==num){
            printf("Congratulations, you have guessed a correct number.");
            break;
        }
        else if(random_genNo<num){
            printf("Generated number is less than entered number, try your luck again...");
        }
        else if(random_genNo>num){
            printf("Generated number is greater than entered number, try your luck again...");
        }

        if(count==7){
            printf("\n\n### Maximum limit of atttempt finished, BAD LUCK !!!\n");
            break;
        }
    }

    return 0;
}
