#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    // == checks whether two values are equal, while = assigns a value.
    return 0;

}