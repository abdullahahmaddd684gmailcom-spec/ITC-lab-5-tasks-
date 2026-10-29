#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90)
    {
        grade = 'A';
    }
    else if (marks >= 80)
    {
        grade = 'B';
    }
    else if (marks >= 70)
    {
        grade = 'C';
    }
    else if (marks >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;

    // The highest range is checked first so that each student receives the correct grade.
    return 0;

}