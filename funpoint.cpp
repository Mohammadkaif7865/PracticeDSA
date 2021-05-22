#include <iostream>
using namespace std;
void Print(){
    cout<<"Hello world"<<endl;
}
int Add(int a, int b)
{
    return a + b;
}
int main()
{
    int c, (*p)(int, int);
    void (*ptr)();
    ptr = Print;
    p = &Add;
    c = (*p)(2, 3);
    cout << *p<<endl;
    ptr();
    return 0;
}