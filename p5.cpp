#include <iostream>
using namespace std;
int digitsum(string &str, int start,int size, int sum)
{
    if (start == size)
    {
        return sum;
    }
    return digitsum(str,start+1, size, sum+int(str[start]));
    
}
int main()
{
    string s = "45534";
    int size = sizeof(s) / 4;
    cout<<digitsum(s,0,size-1,0);
    
    return 0;
}