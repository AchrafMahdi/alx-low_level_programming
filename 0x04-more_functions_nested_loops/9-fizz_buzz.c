#include <stdio.h>

/**
 * main - prints num or fizz or buzz or fizzBuzz :)
 * Return: 0
*/

int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) //if number is multiple of both 3 and 5 print FizzBuzz.
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0) //if number is multiple of 3 and 5 print Fizz.
        {
            printf("Fizz");
        }
        else if (i % 5 == 0) //if number is multiple of 5 print Buzz.
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", i); //if number is not multiple of 3 or 5 print number.
        }
        
        if (i < 100) //if number is less than 100 print " " for space.
        {
            printf(" ");
        }
    }    
    return 0;
}
