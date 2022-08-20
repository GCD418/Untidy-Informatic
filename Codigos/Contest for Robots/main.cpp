#include <bits/stdc++.h>
using namespace std;
long n, r1=0, b1=0;
int main()
{
    cin>>n;
    long r[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>r[i];
        if(r[i]==1)
        {
            r1++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        if(b[i]==1)
        {
            b1++;
        }
    }
    if(r1==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(b1==0)
    {
        cout<<"1"<<endl;
        return 0;
    }
    if(r1==n && b1==n)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(r[i]==1 && b[i]==1)
        {
            r1--;
            b1--;
        }
    }
    if(r1==0 && b1==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(r1>b1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    cout<<((b1/r1)+1)<<endl;
    return 0;
}
