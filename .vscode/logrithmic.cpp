#include<iostream>
using namespace std;
int Logrithmic(int a, int b){
    int count = 0;
    while (b>1)
    {
       b = b/a; 
       count++;
    }
    return count;
    
}
int LogByRec(int a, int b){
    static int count = 0;
    if (b<=1)
    {
        return count;
    }
    b = b/a;
    count++;
    return LogByRec(a,b);
}
int main(){
    int a, b;
    cout<<"Enter the base and the number for the Logrithmic funtion respectively  "<<endl;
    cin>>a>>b;
    cout<<LogByRec(a,b);
    return 0;
}