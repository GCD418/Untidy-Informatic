#include <bits/stdc++.h>
using namespace std;
long t, a, b, c, ret;
string s;
char previus, siguiente;
long long pruebas()
{
    if(s[i]=='?')
    {
        if(previus=='a')
        {
            a--;
        }
        if(previus=='b')
        {
            b--;
        }
        if(previus=='c')
        {
            c--;
        }
        if((a+b+c)<=0)
        {
            cout<<"-1"<<endl;
            return 2;
        }
    }
}
long long func()
{
    previus=' ';
    for(int i=0; i<s.size(); i++)
    {
        if(i!=(s.size()-1))
        {
            siguiente=s[i+1];
        }
        else
        {
            siguiente=' ';
        }
        a=b=c=1;
        ret=pruebas();
        if(ret==2)
        {
            return 0;
        }
        previus=s[i];
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
    }
    return 0;
}
