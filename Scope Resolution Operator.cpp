#include<iostream>
#include<conio.h>
using namespace std;
int x = 10;   //global
void display ();
{
    cout<< "Inside the display function x = "<< x <<endl;
}
int main()
{
    int x = 50; //local
    cout<< "Inside the main function x = "<< x <<endl;
    cout<< :: x <<endl;


    display();

    getch();
}
