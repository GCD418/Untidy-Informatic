#include <bits/stdc++.h>
using namespace std;
long long t, a;
string s;

long long func()
{
    a=s.size()-1;
    if((s[a]=='o') && (s[a-1]=='p'))
    {
        cout<<"FILIPINO"<<endl;
        return 0;
    }
    if((s[a]=='u') && (s[a-1]=='s') && (s[a-2]=='e'))
    {
        cout<<"JAPANESE"<<endl;
        return 0;
    }
    if((s[a]=='u') && (s[a-1]=='s') && (s[a-2]=='a'))
    {
        cout<<"JAPANESE"<<endl;
        return 0;
    }
    if((s[a]=='a') && (s[a-1]=='d'))
    {
        cout<<"KOREAN"<<endl;
        return 0;
    }
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        func();
    }
    return 0;
}
