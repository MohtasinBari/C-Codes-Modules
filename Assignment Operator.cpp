#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int x = 3;
  int y = 2;

  x+=y; //x = x + y = 5
  cout<<x <<endl ;
  x-=y; //x = x - y = 1
  cout<<x <<endl ;
  x*=y; //x = x * y = 6
  cout<<x <<endl ;
  x/=y; //x = x / y = 1.5
  cout<<x <<endl ;
  x%=y; //x = x % y = 1.5
  cout<<x <<endl ;

 getch();
}
