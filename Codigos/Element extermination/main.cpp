#include <bits/stdc++.h>
using namespace std;

#define ffor(i,o,f)		   for(long long i = o; i < f; i++)
#define pb 				   push_back
#define mp                 make_pair
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI 				   3.14159265358979323846264338327950
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl 			   '\n'
#define sz(x)              ((int)(x).size())
typedef long long          ll;
typedef pair < int, int >  pii;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi > 	   gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;

ll t, n, x, mi;
vll v;
ll func()
{
    /*ffor(i, 0, n)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    ffor(i, 0, sz(v))
    {
        if(v[i]<0)
        {
            v.erase(v.begin()+i);
        }
    }
    ffor(i, 0, sz(v))
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
    ffor(i, 0, sz(v)-2)
    {
        if(v[i]<v[i+1])
        {
            if(mi>v[i])
            {
                v.erase(v.begin()+i);
            }
            else
            {
                v.erase(v.begin()+i+1);
            }
            i--;
        }
        else
        {
            mi=v[i];
        }
    }
    ffor(i, 0, sz(v))
    {
        if(v[i]<v[i+1])
        {
            v.erase(v.begin()+i);
        }
    }
    /*ffor(i, 0, sz(v))
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
    if(v.back()==-5)
    {
        v.pop_back();
    }
    if(v.back()==-5)
    {
        v.pop_back();
    }
    if(sz(v)==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        mi=-5;
        ffor(i, 0, n)
        {
            cin>>x;
            v.pb(x);
        }
        v.pb(-5);
        v.pb(-5);
        func();
    }
    return 0;
}
