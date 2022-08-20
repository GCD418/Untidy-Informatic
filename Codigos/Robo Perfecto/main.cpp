#include <bits/stdc++.h>
using namespace std;
long k, q, p;
long long func()
{
    if(p==q || p==k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    while(p>q)
    {
        if(p==k)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        //cout<<"h"<<endl;
        //cout<<p<<endl;
        p-=k;
        if(p<=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if((p%q)==0)
        {
            cout<<"SI"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
    return 0;
}
int main()
{
    while(cin>>k)
    {
        cin>>q>>p;
        func();
    }
    return 0;
}
