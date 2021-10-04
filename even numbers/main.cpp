#include <iostream> // Include the iostream library for using input output objects

using namespace std; // declare namespace std as a global variable

// Driver Code
int main()
{
    int number;
    cout << "Enter a number"; // ask for the number
    cin >> number; // take input from the user
    if (number % 2 == 0) // add if else to check whether is it even 
    {
        cout << "It is an even number\n"; // show It is an even number
    }else // add an else here
    {
        cout << "It is an odd number\n"; // show It is a old number
    }

    return 0; // finally return 0 statement at the end
}
