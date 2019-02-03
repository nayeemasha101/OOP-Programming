#include<iostream>

using namespace std;

class Student
{
public:
    int id;
    double gpa;
};

main()
{
    Student Nayeem;

    Nayeem.id = 101;
    Nayeem.gpa = 4.94;

    cout << "Id " << Nayeem.id << "    " << "GPA " << Nayeem.gpa <<endl;

    return 0;
}
