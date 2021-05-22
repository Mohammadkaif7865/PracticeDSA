#include <iostream>
using namespace std;
int partition(int *s, int low, int high)
{
    int i = low + 1;
    int j= high;
    int temp = 0;
    int pivot = s[low];
    while (i<j)
    {
        while (s[i]<=pivot)
        {
            i++;
        }
        while (s[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        
    }
    temp = s[j];
    s[j] = s[low];
    s[low] = temp;
    return j;
}
void Quicksort(int *s, int low, int high)
{
    if (low < high)
    {
        int partitionINdex = partition(s, low, high);
        Quicksort(s, low, partitionINdex - 1);
        Quicksort(s, partitionINdex + 1, high);
    }
}
int main()
{
    int arr[] = {34, 525, 7, 4786, 65463, 353, 52, 14,7, 424, 7,775, 3, 23};
    int size = sizeof(arr) / sizeof(int);
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"After "<<endl;
    Quicksort(arr, 0, size - 1);
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}