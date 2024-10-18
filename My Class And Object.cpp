#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public :
    int id;
    double gpa;
};
int main()
{

    Student Alim;
    Alim.id = 101;
    Alim.gpa = 3.44;
    cout << Alim.id <<"  "<<Alim.gpa<<endl;

    Student Suparna;
    Suparna.id = 102;
    Suparna.gpa = 5.00;
    cout << Suparna.id <<"  "<<Suparna.gpa<<endl;



    getch();
}
