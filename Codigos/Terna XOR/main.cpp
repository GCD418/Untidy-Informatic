#include <bits/stdc++.h>
using namespace std;
long long t, n, m, may, aux;
string a, b, c;

int main()
{
    cin>>t;
    while(t--)
    {
        c="                                                         ";
        cin>>n>>a>>m>>b;
        may=max(n, m);
        for(int i=0; i<may; i++)
        {
            aux=((((a[i]-'0')+(b[i]-'0'))%3));
            c[i]=aux-'0';
        }
        cout<<c<<endl;
    }
    return 0;
}
