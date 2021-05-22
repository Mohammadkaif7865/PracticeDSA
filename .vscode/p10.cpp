#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string str1, string str2)
{
    int j= 0;
    for(int i = 0; i<str2.size(); i++){
        if(str1[j] == str2[i])
           j++;
        if(j==str1.size())
        return true;
    }
    return false;
}
string genratePrintBinary(string str)
{
    queue<string> q;
    q.push("1");
    while(true)
    {
        string s1 = q.front();
        q.pop();
        if(isSubsequence(s1,str)==false)
        return s1;
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}
int main(){
    long long int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int flag = 0;
        for(int i = 0;i<str.size();i++)
        {
            if(str[i]=='0')
            flag = 1;
        }
       if (flag == 0)
        cout<<"0"<<endl;
        else
        cout<<genratePrintBinary(str)<<endl;
    }
    return 0;
}