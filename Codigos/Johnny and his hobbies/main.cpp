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

ll t, n, c, eq;
vll a2;
ll func(ll x[])
{
    ffor(i, 1, 1025)
    {
        a2.clear();
        eq=0;
        ffor(j, 0, n)
        {
            c=(x[j])^(i);
            a2.pb(c);
        }
        sort(all(a2));
        ffor(j, 0, n)
        {
            if(a2[j]==x[j])
            {
                eq++;
                continue;
            }
            else
            {
                break;
            }
        }
        if(eq==n)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        func(a);
    }
    return 0;
}
