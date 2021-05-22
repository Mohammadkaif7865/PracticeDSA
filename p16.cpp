#include<iostream>
using namespace std;
int *sumt(int *a, int *b){
    int *c = new int  ;
    *c = *a+*b;
    return c;
}
void prif(){
    cout<<"Hello world"<<endl;
}

int main(){
    int a= 20,b =3;
    int *sum = sumt(&a,&b);
    prif();
    cout<<*sum;
    return 0;
}