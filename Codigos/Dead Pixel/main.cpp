#include <bits/stdc++.h>
using namespace std;
long long t, a, b, x, y;

long long func()
{
    if(a<b)
    {
        //if(x<y)
        //{
        if((b-y)<5)
        {
            b-=(b-y);
            cout<<a*b<<endl;
            return 0;
        }
        else
        {
            b--;
            b-=y;
            cout<<a*b<<endl;
            return 0;
        }
        //}
        //if(y<x)
        //{

        //}
    }
    if(b<a)
    {
        //if(x<y)
        //{
        if(x==y)
        {
            if(x==0)
            {
                a--;
                cout<<a*b<<endl;
                return 0;
            }
            if((a-x)<5)
            {
                a-=(a-x);
                cout<<a*b<<endl;
                return 0;
            }
            else
            {
                a--;
                a-=x;
                cout<<a*b<<endl;
            }
        }
        if((a-x)<5)
        {
            a-=(a-x);
            cout<<a*b<<endl;
            return 0;
        }
        else
        {
            a--;
            a-=x;
            cout<<a*b<<endl;
            return 0;
        }
        //}
        //if(y<x)
        //{

        //}
    }
    if(a==b)
    {
        if(x==y)
        {
            a-=1;
            cout<<a*b<<endl;
            return 0;
        }
        if(x<(a-y))
        {
            if((a-x)<5)
            {
                a-=(a-x);
                cout<<a*b<<endl;
                return 0;
            }
            else
            {
                a--;
                a-=x;
                cout<<a*b<<endl;
                return 0;
            }
        }
        else
        {
            if((a-y)<5)
            {
                a-=(a-y);
                cout<<a*b<<endl;
                return 0;
            }

        }
        if(y<x)
        {
            if((a-y)<5)
            {
                a-=(a-y);
                cout<<a*b<<endl;
                return 0;
            }
            else
            {
                a--;
                a-=y;
                cout<<a*b<<endl;
                return 0;
            }
        }
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y;
        func();
    }
    return 0;
}
