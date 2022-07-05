#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (sucess/correct)
*/

it main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n==0)
{
printf("%i is zero\n", n);
}

<<<<<<< HEAD
else
{
printf("%i is positive\n" , n);
=======
        srand(time(0));

        n = rand() - RAND_MAX / 2;

        if (n == 0)
        {
        printf("%i is zero\n", n);
        }

        

        else if (n < 0)

        {

        printf("%d is negative\n", n);

        }


        else
        {
        printf("%i is positive\n", n);
        }
        
        return (0);

>>>>>>> d62b2fb009f5a5abe11ee0c4eebe8b532e13c126
}

else if (n<0)
{
printf("%i is negative\n"clear
clear
q!]
q!

:
q!
