#include <iostream>
using namespace std;
bool Ispalin(int a)
{
    int b = 0, c;
    c = a;
    while (a > 0)
    {
        b = b * 10 + a % 10;
        a = a / 10;
    }
    cout<<b<<endl;
    if (c==b)
    {
      return true;  
    }
    return false;
    
}
int main()
{
    int a;
    cout << "Enter a number to check weather the number is palindrome or not " << endl;
    cin >> a;
    cout << "The number is palindrome " << Ispalin(a);
    return 0;
}