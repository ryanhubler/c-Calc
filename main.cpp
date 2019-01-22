#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
        int trigchoice;
        int choice;
        float x;
        float y;
        cout << "What operation would you like to do 1. Add 2. Subtract 3. Divide 4. Multiply 5. Trig ";
        cin  >> choice;
    if ( choice== 1)
    {
        cout << "Input first number";
        cin >> x;
        cout << "Input second number";
        cin >> y;
        cout << x + y;
    }
    else if ( choice == 2)
    {
        cout << "Input first number";
        cin >> x;
        cout << "Input second number";
        cin >> y;
        cout << x - y;
    }
    else if (choice == 3)
    {
        cout << "Input first number";
        cin >> x;
        cout << "Input second number";
        cin >> y;
        cout << x / y;
    }
    else if (choice == 4)
    {
        cout << "Input first number";
        cin >> x;
        cout << "Input second number";
        cin >> y;
        cout << x * y;
    }
    else if ( choice == 5)
    {
        cout << "Welcome to trig 1. Cos 2. Sine 3. Tan";
        cin >> trigchoice;
        cin >> x;
    if ( trigchoice == 1)
    {
        cout << cos(x);
    }
        
    }
    else if ( choice != 1,2,3,4,5)
    {
        cout << "Not a choice you idiot";
    }
    return 0;
}

