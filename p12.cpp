#include <iostream>
using namespace std;
int bub(int *c)
{
    *c = (*c)*2;// here was a lot of confusion
    return 1;
}
int main()
{
    int a = 20;
    cout << (&a)<<endl; //yes you can reference and dereferrance at the same point of code
    int c = 10;
    bub(&c);
    cout<<c;
    return 0;
}