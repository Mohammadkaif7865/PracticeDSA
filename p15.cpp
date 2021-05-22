#include<iostream>
using namespace std;

int main(){
    int a[2][3];
    a[0][0] = 2;
    a[0][1] = 3;
    a[0][2] = 6;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 8;
    int (*p)[3] = a;
    cout<<a[1]<<endl;// in 2- d array you have to dereference twice to get a number on a particular address
    cout<<*(*a+1)<<endl;
    cout<<*(*(a+1)+1)<<endl;
    return 0;
}