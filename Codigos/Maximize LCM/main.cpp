#include <bits/stdc++.h>
using namespace std;
long long t, n, m, product;
//vector <long long> restos;
long long func()
{
    product=1;
    cin>>n>>m;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        product*=a[i];
    }
    for(int i=2; i<=m; i++)
    {
        if((product%i)!=0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"1"<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        func();
    }
    return 0;
}
