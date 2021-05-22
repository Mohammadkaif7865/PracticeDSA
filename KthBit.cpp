#include <iostream>
using namespace std;
void KthBitLS(int a, int k)//by left shift
{
    if ((a & (1 << (k - 1))) != 0)
    {
        cout << "YES ";
    }
    else
    {
        cout << "NO";
    }
}
void KthBitRS(int a, int k)//By right shift
{
    if (((a>>(k-1))&1) == 1)
    {
        cout << "YES ";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    int a, k;
    cout << "Enter a number of which you want to check the kth bits match " << endl;
    cin >> a;
    cout << "Enter the kth bit of the number to match with the original number " << endl;
    cin >> k;
    KthBitRS(a, k);
    return 0;
}