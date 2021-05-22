#include <iostream>
#include <algorithm>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
long long int LCM(long long int a, long long int b)
{
    long long int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
        res++;
    }
    return res;
}
long long int opLCM(long long int a, long long int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    long long int a, b;
    cout << "Enter the two number " << endl;
    cin >> a >> b;
    cout << "The LCM is " << opLCM(a, b);
    return 0;
}