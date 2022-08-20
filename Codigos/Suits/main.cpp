#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, e, f, money=0;
int main()
{
    cin>>a>>b>>c>>d>>e>>f;
    if(e>f)
    {
        while(d>0 && a>0)
        {
            d--;
            a--;
            money+=e;
        }
        while(b>0 && c>0 && d>0)
        {
            d--;
            b--;
            c--;
            money+=f;
        }

    }
    if(f>e)
    {
        while(b>0 && c>0 && d>0)
        {
            d--;
            b--;
            c--;
            money+=f;
        }
        while(d>0 && a>0)
        {
            d--;
            a--;
            money+=e;
        }
    }
    if(f==e)
    {
        while(b>0 && c>0 && d>0)
        {
            d--;
            b--;
            c--;
            money+=f;
        }
        while(d>0 && a>0)
        {
            d--;
            a--;
            money+=e;
        }
    }
    cout<<money<<endl;
    return 0;
}
