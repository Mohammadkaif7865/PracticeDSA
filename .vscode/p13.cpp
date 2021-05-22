#include <iostream>
#include<cmath>
using namespace std;
// Callback funtion should compare two intergers, should retrun 1 if fire=st element has higher rank , 0 if elements are equal and -1 if second has higher rank
int compare(int a, int b)
{
    if (abs(a) > abs(b))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void BuubleSort(int *s, int size, int (*compare)(int, int))
{
    int temp = 0;
    for (int i = 0; i < size - 1; i++) // i< size it would be naive and makesome unwanted compare
    {
        for (int j = 0; j < size - i - 1; j++) //same here
        {
            if (compare(s[j], s[j + 1]) > 0)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {23, 42, 5543, -354, 545214, 5453, 65767, 8632};
    int size = sizeof(a) / sizeof(int);
    BuubleSort(a, size,compare);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}