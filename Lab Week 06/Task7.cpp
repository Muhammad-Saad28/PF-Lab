#include <iostream>
using namespace std;

char grade(int marks)
{
    char grades;
    if (marks < 50)     
            grades = 'F';
    else if (marks >= 50 && marks <= 60) 
            grades = 'E';
    else if (marks >= 61 && marks <= 70) 
            grades = 'D';
    else if (marks >= 71 && marks <= 80) 
            grades = 'C';               
    else if (marks >= 81 && marks <= 85) 
            grades = 'B';
    else if (marks > 85) 
            grades = 'A';
    return grades;
}

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    cout<<grade(marks);
}