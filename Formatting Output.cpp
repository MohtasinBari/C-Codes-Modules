#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main() {
    float num1, num2;
    cout<<"Enter 2 numbers: ";
    cin>> num1>> num2;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);

    float sum = num1 + num2;
    cout<<setw(20) << "Sum is: " << sum;
    cout<<endl;

    float sub = num1 - num2;
    cout<<setw(20) << "Subtraction is: " << sub;
    cout<<endl;

    cout<<noshowpoint;
    float mul = num1 * num2;
    cout<<setw(20) << "Multiplication is: " << mul;
    cout<<endl;

    double div = (float) num1 / num2; //type casting
    cout<<setw(20) << "Division is: " << div;
    cout<<endl;


    getch();
}
