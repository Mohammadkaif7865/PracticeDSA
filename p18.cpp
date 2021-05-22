#include <iostream>
using namespace std;
bool palindrome(int a)
{
    int b = a;
    int rev = 0;
    while (a)
    {
        rev = rev * 10 + a % 10;
        a = a / 10;
    }
    if (b == rev)
    {
        return true;
    }
    return false;
}
int main()
{
    int a;
    cout << "Enter a number " << endl;
    cin >> a;
    cout << "The number is palindrone (0/1) (n/y) " << palindrome(a);
    return 0;
}