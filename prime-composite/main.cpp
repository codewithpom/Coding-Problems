#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int i;
    for (i = 2; i < number; i++)
    {
        
        if (number%i == 0)
        {
            cout << number << " is a composite number\n";
            break;
        }
        
    }
    if (i == number)
    {
       cout << number << " is a prime number\n";
    }
    
}
