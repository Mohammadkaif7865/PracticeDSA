#include<iostream>
using namespace std;
void series(int n){
    if (n==0)
    {
        return;
    }
    series(n-1);
    cout<<n<<" ";
    
}
int main(){
    series(23);
    return 0;
}