#include <iostream>
using namespace std;
void countSetBit(int a)
{
    int count = 0;
    while (a > 0)
    {
        if ((a & 1) == 1)
        {
            count++;
        }
        a = (a >> 1);
    }
    cout << count << endl;
}
void countSetBit2(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a % 2 == 1)
        {
            count++;
        }
        a = a / 2;
    }
    cout << count << endl;
}
int main()
{
    int a;
    cout << "Enter the number for whuch you want to count set bit of the number's binary representation " << endl;
    cin >> a;
    countSetBit(a);
    countSetBit2(a);
    return 0;
}