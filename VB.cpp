#include<iostream>
using namespace std;
void Bubble(int *s,int size){
    int temp = 0;
     for (int i = 0; i < size-1; i++)
     {
         for (int  j = 0; j < size-i-1; j++)
         {
            if (s[j]>s[j+1])
            {
              temp = s[j];
              s[j] = s[j+1];
              s[j+1] = temp;  
            }
            
         }
         
     }
     
}
int main(){
    int arr[] = {23214,235,426,7,46,856,85,7643,67,687,9};
    int size = sizeof(arr)/sizeof(int);
    Bubble(arr,size);
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}