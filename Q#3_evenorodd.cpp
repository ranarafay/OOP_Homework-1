// ******EVEN or ODD******

#include <iostream>
using namespace std;

int main()
{

    // Taking input from user:

    int x;
    cout << "Enter number to check even or odd: " << endl;
    cin >> x;

    // applying desired conditions

    if (x % 2 == 0)
    {

        cout << "The number " << x << " is an even number!" << endl;
    }

    else
    {

        cout << "The number is odd!" << endl;
    }

    return 0;
}