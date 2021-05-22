#include <iostream>
using namespace std;
void funt(int n)
{
    if (n == 0)
    {
        return;
    }
    funt(n /2);
    cout << n % 2;
}
int main()
{
    funt(245);
    return 0;
}