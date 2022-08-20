#include <bits/stdc++.h>
using namespace std;
long long t, x, y, a, b, tim, positions;

long long physics()
{
    tim=a+b;
    positions=(y-x);
    if(positions%tim==0)
    {
        cout<<(positions/tim)<<endl;
        return 0;
    }
    cout<<"-1"<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        physics();
    }
    return 0;
}
