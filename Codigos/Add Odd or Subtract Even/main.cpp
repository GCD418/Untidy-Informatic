#include <bits/stdc++.h>
using namespace std;
long long t, a, b, movements, add, sub;

long long func()
{
    if(a==b)
    {
        cout<<movements<<endl;
        return 0;
    }
    if(a<b)
    {
        add=(b-a);
        if((add%2)==0)
        {
            movements+=2;
            cout<<movements<<endl;
            return 0;
        }
        if((add%2)!=0)
        {
            movements++;
            cout<<movements<<endl;
            return 0;
        }
    }
    if(b<a)
    {
        sub=(a-b);
        if((sub%2)==0)
        {
            movements++;
            cout<<movements<<endl;
            return 0;
        }
        if((sub%2)!=0)
        {
            movements+=2;
            cout<<movements<<endl;
            return 0;
        }
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        add=movements=sub=0;
        cin>>a>>b;
        func();

    }
    return 0;
}
