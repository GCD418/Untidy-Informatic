#include <bits/stdc++.h>
using namespace std;
long t, may_a, may_b, men_a, men_b;
string a, b;

long long func()
{
    may_a=(a[0]-'0');
    men_a=(a[0]-'0');
    for(int i=1; i<a.size(); i++)
    {
        if((a[i]-'0')>may_a)
        {
            may_a=(a[i]-'0');
        }
        if(men_a>(a[i]-'0'))
        {
            men_a=(a[i]'0');
        }
    }
    may_b=(b[0]-'0');
    men_b=(b[0]-'0');
    for(int i=1; i<b.size(); i++)
    {
        if((b[i]-'0')>may_b)
        {
            may_b=(b[i]-'0');
        }
        if(men_b>(b[i]-'0'))
        {
            men_b=(b[i]'0');
        }
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
    }
    return 0;
}
