#include<iostream>
using namespace std;
int sum(int n, int s){
    if (n==0)
    {
        return s;
    }
    return sum(n-1, s+n);
    
}
// The tail recursion is better than non-tail recursion. As there is no task left after the recursive call, it will be easier for the compiler to optimize the code. When one function is called, its address is stored inside the stack. So if it is tail recursion, then storing addresses into stack is not needed
int main(){
    cout<<sum(20,0);
    return 0;
}