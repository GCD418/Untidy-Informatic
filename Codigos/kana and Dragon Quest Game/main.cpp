#include <bits/stdc++.h>
using namespace std;
long long t, n, m, x;

long long func()
{
    while(n>0 && x>=21)
    {
        x/=2;
        x+=10;
        if(x<=0)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        n--;
    }
    while(m>0)
    {
        x-=10;
        m--;
        if(x<=0)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m;
        func();
    }
    return 0;
}
