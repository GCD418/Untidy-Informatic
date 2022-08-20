#include <bits/stdc++.h>
using namespace std;
int t, n, a, b, m, diferencia_c, diferencia_p;
vector <int> p;
vector <int> c;

int func()
{
    for(int i=0; i<c.size()-1; i++)
    {
        //cout<<c[i]<<"   "<<p[i]<<endl;
        if((c[i+1]>=c[i]) && (p[i+1]>=p[i]))
        {
            continue;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }

    }
    for(int i=0; i<p.size()-1; i++)
    {
        if(c[i+1]>c[i])
        {
            diferencia_c=(c[i+1]-c[i]);
            diferencia_p=(p[i+1]-p[i]);
            if(diferencia_c>diferencia_p)
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
        if(c[i]>p[i])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(c.back()>p.back())
    {
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        //m=n;
        p.clear();
        c.clear();
        while(n--)
        {
            cin>>a>>b;
            p.push_back(a);
            c.push_back(b);
        }
        func();
    }
    return 0;
}
