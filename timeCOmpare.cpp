#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib>
#define len 50000
using namespace std;

void SelectionSort(int *a, int size)
{
    int temp = 0, index;
    for (int i = 0; i < size - 1; i++)
    {
        index = i;
        temp = a[i];
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[index])
            {
                index = j;
            }
        }
        a[i] = a[index];
        a[index] = temp;
    }
}
void insertionSOrt(int *a, int size)
{
    int j, key;
    for (int i = 1; i < size; i++)
    {
        j = i - 1;
        key = a[i];
        while (a[j] > key && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
void BubbleSort(int *a, int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int partition(int *a, int low, int high)
{
    int i, j, pivot, temp = 0;
    j = high;
    i = low + 1;
    pivot = a[low];
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void QuickSort(int *a, int low, int high)
{
    if (high > low)
    {
        int partitionINdex = partition(a, low, high);
        QuickSort(a, low, partitionINdex - 1);
        QuickSort(a, partitionINdex + 1, high);
    }
}
void merge2(int *s, int low, int mid, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (s[i] < s[j])
        {
            B[k] = s[i];
            i++;
            k++;
        }
        else
        {
            B[k] = s[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = s[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = s[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        s[i] = B[i];
    }
}
void mergeSort2(int *s, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort2(s, low, mid);
        mergeSort2(s, mid + 1, high);
        merge2(s, low, mid, high);
    }
}
void swapping(int &a, int &b) {     //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main(void)
{
    int a[len];
    int test[] = {35, 4, 635, 7, 86, 865, 43, 75, 865, 34, 575, 869, 46}, tsize;
    tsize = sizeof(test) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        a[i] = rand();
    }

    cout << "Intialisation Finished !!!!!! " << endl;

    int size = len;
    clock_t start, end;

    /* Recording the starting clock tick.*/
    start = clock();

    mergeSort(a, 0, len - 1);
    cout << "Executed SucessFully !!!! " << endl;

    // Recording the end clock tick.
    end = clock();
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    // for (int i = 0; i < tsize; i++)
    // {
    //     cout << test[i] << " ";
    // }

    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);

    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(8);
    cout << " sec " << endl;

    return 0;
}