#include <iostream>
using namespace std;
long long int Fact(long long int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    return a * Fact(a - 1);
}
int NTZ1(long long int a)
{
    int count = 0;
    long long int b = Fact(a);
    while (b % 10 == 0)
    {
        count++;
        b = b / 10;
    }
    return count;
}
int NTZ2(long long int a)
{
    int count = 0;
    for (long long int  i = 5; i < a; i = i*5)
    {
        count = count + a/i;
    }
    return count;
}
int main()
{
    long long int a;
    cout << "Enter the number for you want factorial " << endl;
    cin >> a;
    cout << "The number of trailing Zeroes are " << NTZ2(a);
    return 0;
}