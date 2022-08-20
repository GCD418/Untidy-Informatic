#include <bits/stdc++.h>
using namespace std;

long long h, m, t, minutes=0;

int main()
{
    cin>>t;
    while(t--)
    {
        minutes=0;
        cin>>h>>m;
        minutes+=(h*60+m);
        cout<<1440-minutes<<endl;
    }
    return 0;
}
