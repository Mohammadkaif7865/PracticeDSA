#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
bool ISprime(int a)
{
    if (a <= 1)
    {
        return false;
    }
    if (a % 2 == 0 || a % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= a; i = i + 6)
    {
        if (a % i == 0 || a % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
int primeINBetween(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (ISprime(i))
        {
            cout << i << " ";
            count++;
        }
    }
    return count;
}
int main()
{
    int a, b, c;
    // cout << "Enter the numbers for you want gcd " << endl;
    // cin >> a >> b;
    // cout << "The HCF is : " << gcd(a, b) << endl;
    // cout << "The LCM is : " << lcm(a, b) << endl;
    // cout << "Enter a number to check weather the number is prime or not " << endl;
    // cin >> c;
    // cout << "The answer is  " << ISprime(c);
    // We want to find the number of prime number between two numbers . Now lets us give it a try !!!!!
    cout << "Enter the number between which you want to find the number of prime " << endl;
    cin >> a >> b;
    cout << "The number of prime number between " << a << " and " << b << " is " << primeINBetween(a, b);
    return 0;
}