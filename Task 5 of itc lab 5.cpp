#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber)
    {
        cout << "First number is greater";
    }
    else
    {
        cout << "First number is not greater";
    }

    return 0;
}
// First number is not greater because both numbers are equal. The condition firstnumber > second number 
// is false when both numbers are equal so the else statement executes.