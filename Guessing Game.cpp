#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int guessNumber, randomNumber;
        cout<<"Enter your guess number between 1 to 5: ";
        cin>>guessNumber;

        randomNumber = 1+ rand()%5;

        if (guessNumber==randomNumber)
        {
            cout<<"You have won"<<endl<<endl;
        }

        else
        {
            cout<<"You have lost. Try Again "<<endl;
            cout<<"Random Number was: "<<randomNumber<<endl<<endl;
        }
    }


    getch();

}

