#include <bits/stdc++.h>
using namespace std;

long long c, v0, v1, a, l, dias=0;

int main()
{
    cin>>c>>v0>>v1>>a>>l;
    for(int i=0; i<1000000; i++)
    {
        c-=v0;
        dias++;
        if(c<=0)
        {
            cout<<dias<<endl;
            return 0;
        }
        v0+=a;
        if(v0>v1)
        {
            v0=v1;
        }
        c+=l;
    }
    return 0;
}
