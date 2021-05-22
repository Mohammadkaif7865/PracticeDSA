#include<iostream>
using namespace std;
void PRintAllDivisor(int a){
    for (int  i = 1; i*i <= a; i++)
    {
        if (a%i==0)
        {
            cout<<i<<" ";
            if (i != a/i)
            {
                cout<<a/i<<" ";
            }
            
        }

        
    }
    
}
void PRintAllDivisorOP(int a){
    int i;
    for (i=1; i*i <= a; i++)
    {
        if (a%i==0)
        {
            cout<<i<<" ";
        } 
    }
    for ( ; i>=1; i--)
    {
       if (a%i==0)
       {
           cout<<a/i<<" ";
       }
       
    }
    
}
void PRintAllDivisorNaive(int a){
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            cout<<i<<" ";
        }
        
    }
    
}
int main(){
    int a;
    cout<<"Enter the number for which you want to print the all the divisor !!! "<<endl;
    cin>>a;
    PRintAllDivisorOP(a);
    return 0;
}