#include <iostream>
using namespace std;
void selection(int *s, int size)
{
    int key;
    int temp = 0, index;
    for (int i = 0; i < size; i++)
    {
        key = s[i];
        temp = s[i];
        for (int j = i + 1; j < size; j++)
        {
            if (s[j] <= key)
            {
                key = s[j];
                index = j;
            }
        }
        s[i] = key;
        s[index] = temp;
    }
}
int main()
{
    int arr[] = {2, 55, 345, 344, 63, 64, 85, 98, 2, 45, 33};
    int size = sizeof(arr) / sizeof(int);
    selection(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}