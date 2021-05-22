#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int a[1000];
    for (int i = 0; i < 1000; i++)
    {
        a[i] = rand();
    }
    for (int i = 0; i < 1000; i++)
    {
        cout << a[i] << " ";
    }
    cout << "Finished !!!!!! ";

    return 0;
}