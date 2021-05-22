#include <iostream>
#include <cmath>
using namespace std;
int digits(int n)
{
    int digit = 0;
    while (n != 0)
    {
        n = n / 10;
        digit++;
    }
    return digit;
}
int newnumber(int digits, int n)
{
    int hold = 0, newnum = 0;
    while (n != 0)
    {
        hold = n % 10;
        n = n / 10;
        newnum = newnum + pow(10, digits) * hold;
        digits--;
    }
    return newnum;
}
int main()
{
    int newnum = 0, n, digit = 0;

    cout << "Enter the number " << endl;
    cin >> n;
    digit = digits(n);
    digit = digit - 1;
    newnum = newnumber(digit, n);
    cout << newnum << endl;
    if (newnum == n)
    {
        cout << "True ";
    }
    else
    {
        cout << "False ";
    }

    return 0;
}