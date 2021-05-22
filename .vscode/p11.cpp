#include <iostream>
using namespace std;
void merge(int *s, int low, int mid, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i<=mid && j<=high)
    {
        if (s[i]<s[j])
        {
            b[k] = s[i];
            i++;
            k++;
        }
        else
        {
            b[k] = s[j];
            k++;
            j++;
        }        
    }
    while(i<=mid)
    {
        b[k] = s[i];
        i++;
        k++;

    }
    while (j<=high)
    {
        b[k] = s[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        s[i] = b[i];
    }
    
    
}
void mergeSort(int *s, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(s, low, mid);
        mergeSort(s, mid + 1, high);
        merge(s, low, mid, high);
    }
}
int partition(int *s, int low, int high)
{
    int i = low + 1;
    int j = high;
    int pivot = s[low];
    int temp;
    do
    {
        while (s[i] <= pivot)
        {
            i++;
        }
        while (s[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    } while (i < j);
    temp = s[low];
    s[low] = s[j];
    s[j] = temp;
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
int binarySearch(int *s, int low, int high, int num)
{
    int index, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (s[mid] == num)
        {
            return mid;
        }
        else if (s[mid] < num)
        {
            low = mid + 1;
        }
        else if (s[mid] > num)
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {23, 124, 23, 235, 2, 6357, 45784, 84, 523, 23, 5};
    int size = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int j = binarySearch(arr, 0, size - 1, 523);
    cout << "\nThe element is at " << j;

    return 0;
}