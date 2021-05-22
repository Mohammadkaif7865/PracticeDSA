#include <iostream>
using namespace std;
void insertion(int *s, int size)
{
    for (int  i = 1; i < size; i++)
    {
        int key = s[i];
        int j= i-1;
        while (s[j]>key&& j>=0)
        {
            s[j+1] =s[j];
            j--;
        }
        s[j+1] = key;
        
    }
    
}
int main()
{
    int arr[] = {2, 55, 345, 344, 63, 64, 85, 98, 2, 45, 33};
    int size = sizeof(arr) / sizeof(int);
    insertion(arr, size);
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}