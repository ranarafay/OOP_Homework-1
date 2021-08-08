// *****Salary deduction****

#include <iostream>
using namespace std;
int main()
{
    // taking input form user:

    float sal;
    cout << "\nPlease enter the salary: " << endl;
    cin >> sal;

    // desired conditions:

    if (sal < 10000)
    {
        cout << "\nThere's no deduction made and payable amout is: " << sal << endl;
    }

    else if (sal >= 10000 && sal < 20000)
    {
        float dedc;
        dedc = sal - 1000;
        cout << "\n1000 deducted from your salary and the payable amount is: " << dedc << endl;
    }

    else if (sal >= 20000)
    {
        float dedc;
        dedc = sal - ((7 * sal) / 100);
        cout << "\n7 % deducted (as fund) from your salary and the payable amount is: " << dedc << endl;
    }

    return 0;
}