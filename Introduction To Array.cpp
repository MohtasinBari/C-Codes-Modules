#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks [5];

    marks [0]=50;
    marks [1]=51;
    marks [2]=53;
    marks [3]=55;
    marks [4]=56;
    marks [5]=58;

    cout<<marks[0]<<"  ";
    cout<<marks[1]<<"  ";
    cout<<marks[2]<<"  ";
    cout<<marks[3]<<"  ";
    cout<<marks[4]<<"  ";
    cout<<marks[5]<<"  ";

    for(int i=0; i<5; i++)
    {
        cout<<marks[i]<<" ";
    }


    getch();
}
