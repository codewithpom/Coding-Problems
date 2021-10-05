#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int i;
    for (i = 2; i < number; i++)
    {
        
        if (number%i == 0)
        {
            printf("%d is a composite number\n", number);
            break;
        }
        
    }
    if (i == number)
    {
       printf("%d is a prime number\n", number);
    }
    


}
