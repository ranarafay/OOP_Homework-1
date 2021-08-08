// *****Calculator(2 values)******

#include <iostream>
using namespace std;

int main()
{
    float x, y;
    string sym;

    // Taking user inputs:

    cout << "\nPlease enter first number:\n " << endl;
    cin >> x;

    cout << "\nPlease enter the appropriate operator for the desired operation: " << endl;
    cout << "\n1. Addition (+)" << endl
         << "2. Subtraction (-)" << endl
         << "3. Devision (/)" << endl
         << "4. Multiplication (*)\n"<< endl;
    cin >> sym;

    cout << "\nPlease enter second number:\n " << endl;
    cin >> y;

    // Conditions acc to program:

    if (sym == "+")
    {
        float add;
        add = x + y;
        cout << "\nThe Addition result of " << x << " and " << y << " is " << add << endl;
    }

    else if (sym == "-")
    {
        float sub;
        sub = x - y;
        cout << "\nThe Subtraction result of " << x << " and " << y << " is " << sub << endl;
    }

    else if (sym == "/")
    {
        float dev;
        dev = x / y;
        cout << "\nThe Devision result of " << x << " and " << y << " is " << dev << endl;
    }

    else if (sym == "*")
    {
        float mul;
        mul = x * y;
        cout << "\nThe Multiplication result of " << x << " and " << y << " is " << mul << endl;
    }

    return 0;
}