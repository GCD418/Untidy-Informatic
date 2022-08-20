#include <bits/stdc++.h>
using namespace std;
long n, m, digits=1, ok=0;

long func()
{
    if((n%4)==0 || (n%7)==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    m=n;
    while((m/10)>0)
    {
        m/=10;
        digits++;
    }
    for(int i=0; i<digits; i++)
    {
        if((n%10)==4 || (n%10)==7)
        {
            ok++;
        }
        n/=10;
    }
    if(ok==digits)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}

int main()
{
    while(cin>>n)
    {
        digits=1;
        ok=0;
        func();
    }
    return 0;
}
