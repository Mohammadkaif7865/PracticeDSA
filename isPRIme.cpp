#include <iostream>
using namespace std;
bool ISprime(int a)
{
    if (a == 0)
    {
        return false;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    cout << "Enter a number to check weather the number is prime a number or not" << endl;
    cin >> a;
    // for (int i = 2; i < a; i++)//prime factor naive method
    // {
    //     if (ISprime(i))
    //     {
    //         int x = i;
    //         while (a % x == 0)
    //         {
    //             cout << i << " ";
    //             x = x * i;
    //         }
    //     }
    // }
    cout << ISprime(a);
    return 0;
}