#include<iostream>
using namespace std;
void Print_heloo(){
    cout<<"Hello world"<<endl;
}
void B(void (*ptr)()){
    ptr();
}
int main(){
    void (*p)() = Print_heloo;
    B(p);
    return 0;
}