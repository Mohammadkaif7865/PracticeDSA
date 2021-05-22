#include <iostream>
using namespace std;
int OOO(int *a, int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res = res ^ a[i];
    }
    return res;
}
int main()
{
    int a[] = {5, 3, 4, 4, 3, 5, 3};
    int size = sizeof(a) / sizeof(int);
    cout << OOO(a, size);
    return 0;
}