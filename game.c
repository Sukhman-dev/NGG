#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("guess a number between 1-100 \n");

    do
    {
        
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please! \n");
        }
        else if (guess < number)
        {
            printf("higher number please! \n");
        }
        else
        {
            printf("yahooo!! guessed number is correct. you have taken %d attempts  \n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}
