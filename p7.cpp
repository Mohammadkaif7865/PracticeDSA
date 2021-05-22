#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int T, N, K, count = 0,sumN = 0;
    cin >> T;
    if (T > 10 || T < 1)
    {
        return 0;
    }
    for (int i = 0; i < T; i++)
    {
        cin >> N >> K;
        sumN = sumN+N;
        if (K < 0 || K > N)
        {
            break;
        }
        if (N < K || N > 1000000)
        {
            break;
        }
        if (sumN>1000000)
        {
            break;
        }
        
        cin >> s;

        for (int j = 0; j < N; j++)
        {
            if ((int(s[j]) < 97 || int(s[j]) > 122) && int(s[j]) != 42)
            {
                break;
            }
            if (s[j] == '*')
            {
                count++;
            }
            if (s[j] != '*')
            {
                count = 0;
            }
            if (j == N - 1 && count < K)
            {
                cout << "no" << endl;
            }
            if (count == K)
            {
                cout << "yes" << endl;
                break;
            }
        }
    }
    return 0;
}
