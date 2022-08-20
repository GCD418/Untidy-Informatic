#include <bits/stdc++.h>

using namespace std;
long t, n, suma;
string s;

void sumas()
{
    suma=0;
    for(int i=0; i<=n; i++)
    {
        suma+=(s[i]-'0');
    }
}

long long pruebas(long x)
{
    sumas();
    if(n==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(((s[n]-'0')%2)!=0)
    {
        if((suma%2)==0)
        {
            cout<<s<<endl;
            return 0;
        }
    }
    s[n]=' ';
    n--;
    return pruebas(n);
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        n--;
        pruebas(n);

    }
    return 0;
}
