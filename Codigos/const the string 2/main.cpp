#include <bits/stdc++.h>
using namespace std;
long a, n, b, t, letra=97, aux;
string s;

long func()
{
    for(int i=0; i<n; i++)
    {
        aux=(i%b);
        s+=char(aux+letra);
    }
    cout<<s<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        s="";
        cin>>n>>a>>b;
        func();
    }
    return 0;
}
