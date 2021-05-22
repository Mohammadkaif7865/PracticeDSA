#include <iostream>
using namespace std;
void TOO(int *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << endl;
        }
        else
        {
            count = 0;
        }
    }
}
void TOOEffcient(int *arr, int size)
{
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < size; i++)
    {
        XOR = XOR^arr[i];
    }
    int sn = XOR&(~(XOR-1));
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] & sn) != 0)
        {
            res1 = res1 ^arr[i];
        }
        else
          res2 = res2 ^ arr[i];   
    }
    cout<<res1<<" and "<<res2;
}
int main()
{
    int arr[] = {5, 5, 6, 2, 2, 4, 5, 6, 7, 7, 1, 1};
    int size = sizeof(arr) / sizeof(int);
    TOOEffcient(arr, size);
    return 0;
}