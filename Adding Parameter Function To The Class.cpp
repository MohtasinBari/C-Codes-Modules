#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
    public :
    int id;
    double gpa;
    void display()
    {
      cout << id <<"  "<<gpa<<endl;
    }

    void setValue (int x, double y)
    {
        id = x;
        gpa = y;
    }
};
int main()
{

    Student Alim;
    Alim.setValue(101, 3.44);

    Alim.display();

    Student Suparna;
    Suparna.setValue(121, 3.86);
    Suparna.display();



    getch();
}


