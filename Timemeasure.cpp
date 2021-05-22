
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

// A sample function whose time taken to
// be measured
void BubbleSort(int *a, int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
bool IsPrime2(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool IsPrimenaive(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool IsPrime(int a)
{
    if (a <= 1)
    {
        return false;
    }
    if (a % 2 == 0 && a % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= a; i = i + 6)
    {
        if (a % i == 0 || a % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    /* clock_t clock(void) returns the number of clock ticks
       elapsed since the program was launched.To get the number 
       of seconds used by the CPU, you will need to divide by 
       CLOCKS_PER_SEC.where CLOCKS_PER_SEC is 1000000 on typical
       32 bit system.  */
    clock_t start, end;
    int a;
    cout << "Enter a number to check weather the number is prime or not " << endl;
    cin >> a;

    /* Recording the starting clock tick.*/
    start = clock();

    cout << IsPrimenaive(a) << endl;

    // Recording the end clock tick.
    end = clock();

    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(8);
    cout << " sec " << endl;
    return 0;
}