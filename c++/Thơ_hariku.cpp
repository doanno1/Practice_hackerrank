#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==44)
        {
            str[i]-=12;
        }
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
    }
    cout<<str;
    
    return 0;
}