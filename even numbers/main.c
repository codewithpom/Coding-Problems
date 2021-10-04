#include <stdio.h> // includ the standard lib


int main()
{
    int number; // initialize a variable to store the number
    printf("Enter a number: "); // ask question
    scanf("%d", &number); // take input
    if (number % 2 == 0) // check if it is divisible by 2
    {
        printf("It is an even number\n"); // print that it is even
    }
    else
    {
        printf("It is an odd number\n"); // else print that it is odd
    }
    


}

