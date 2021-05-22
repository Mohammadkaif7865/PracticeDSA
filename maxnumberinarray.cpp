#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,346,547,7,8,7,96,2,4,7,31,7,23,7,3,53,1,2,4,23,42,342,1,4,23,3,5,6,7,76,87,696,7,64,645,765,87568,46};
    int temp = 0, count = 1, max = 1;
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int  j = 0; j <size-1-i ; j++)
        {
            if (arr[j]>arr[j+1])
            {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
            
        }
        
    }
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]== arr[i+1])
        {
            count++;
            if (max<count)
            {
                max = count;
            }
            
        }
        else
        {
            count = 0;
        }
        
        
    }
    cout<<endl<<max+1;
    
    return 0;
}