#include <iostream>
using namespace std;

int main()
{
    int a[] = {34, 43, 434};//a gives us the base address of array
    cout << *a << endl;
    cout << a << endl;
    cout << *(a + 1) << endl;
    cout << (a + 1) << endl;
    cout << *(a + 2) << endl;
    cout << (a + 2) << endl;
    for (int  i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        cout<<"Usual method "<<a[i]<<endl;
        cout<<"New  method  "<<*(a+i)<<endl;

    }
    
    cout << "That's is something new i got to know about array ";
    return 0;
}