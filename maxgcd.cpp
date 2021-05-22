#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    int res = 0;
    res = min(a, b);
    while (res)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}
int gcdoptimized(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcdoptimized(b,a%b);//This is too good to see it will maintain the min and max order
}
int main()
{
    int a, b, gcdn;
    cout << "Enter the two number " << endl;
    cin >> a >> b;
    gcdn = gcdoptimized(a, b);
    cout << "The greatest common divisor of " << a << " & " << b << " is " << gcdn;
    return 0;
}