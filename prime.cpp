#include<iostream>
using namespace std;
bool IsPrime(int n){
    if (n==1)
    {
        return false;
    }
    // for (int  i = 2; i < n; i++)
    // {
    //     if (n%i ==0)
    //     {
    //         return false;
    //     }
        
    // }
    if (n==2||n==3)
    {
        return true;
    }
    
    if (n%2==0||n%3==0)
    {
        return false;
    }
    
    for (int  i = 2; i*i<=n; i++)
    {
        if (n%i ==0|| n%(i+2)==0)
        {
            return false;
        }
        
    }
    return true;

    
    
    
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<"Our answer is "<<IsPrime(n);
    return 0;
}