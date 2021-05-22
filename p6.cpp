#include <iostream>
using namespace std;
int digitsum(int n,int sum)
{
    if (n==0)
    {
        return sum;
    }
    return digitsum(n/10,sum+n%10);
    
}
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    cout<<digitsum(n,0);
    return 0;
}