#include <iostream>
using namespace std;
void countsort(int *s, int hi, int size)
{
    int *a = new int[hi];
    int j = 0;
    for (int i = 0; i <= hi; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        a[s[i]]++;
    }
    for (int i = 0; i <= hi; i++)
    {
        if (a[i]!=0)
        {
            while (a[i]!=0)
            {
                s[j] = i;
                j++;
                a[i]--;
            }
            
        }
        
    }

    delete[] a;
}

int main()
{
    int arr[] = {2, 55, 345, 344, 63, 64, 85, 98, 2, 45, 33};
    int size = sizeof(arr) / sizeof(int);
    int highest = 0;
    for (int i = 0; i < size; i++)
    {
        if (highest < arr[i])
        {
            highest = arr[i];
        }
    }
    countsort(arr, highest, size);
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}