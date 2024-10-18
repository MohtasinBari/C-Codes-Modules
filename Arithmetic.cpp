#include <iostream>

using namespace std;
int main() {
    int num1, num2;
    cout<<"Enter 2 numbers: ";
    cin>> num1>> num2;
    int sum = num1 + num2;
    cout << "Sum is: " << sum;

    int sub = num1 - num2;
    cout << "Subtraction is: " << sub;

    int mul = num1 * num2;
    cout << "Multiplication is: " << mul;

   double div = (float) num1 / num2; //type casting
    cout << "Division is: " << div;

    int rem = num1 % num2;
    cout << "Remainder is: " << rem;
    return 0;
}
