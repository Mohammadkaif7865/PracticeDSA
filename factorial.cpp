#include <iostream>
using namespace std;
long long int fact(long long int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
long long int trailingZeroes(long long int n)
{
    long long int count = 0;
    for (long long int i = 5; i <= n; i = i * 5)
    {
        count = count + n / i;
    }
    return count;
}
int main()
{
    long long int n;
    cout << "ENter the number for you want to find factorial" << endl;
    cin >> n;
    cout << fact(n) << endl;
    cout << trailingZeroes(n) << endl;
    return 0;
}