#include <bits/stdc++.h>
using namespace std;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
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

ll t, n;
vll v;
ll func(ll x[])
{
    ffor(i, 0, n)
    {
        if(i%2==0)
        {
            if(x[i]>0)
            {
                v.pb(-abs(x[i]));
            }
            else
            {
                v.pb(x[i]);
            }
        }
        else
        {
            if(x[i]<0)
            {
                v.pb(abs(x[i]));
            }
            else
            {
                v.pb(abs(x[i]));
            }
        }
    }
    ffor(i, 0, n)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        v.clear();
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        func(a);
    }
    return 0;
}
