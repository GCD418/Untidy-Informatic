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

ll t, n, g, x;

ll func(ll a[])
{
    sort(a, a+n);
    for(ll i=0; i<n; )
    {
        x=0;
        ffor(j, i, (a[i]+i))
        {
            if(a[j]<=a[i])
            {
                x++;
            }
        }
        if(x>=a[i])
        {
            g++;
            i+=a[i];
        }
        else
        {
            i++;
        }
    }
    cout<<g<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        g=0;
        cin>>n;
        ll e[n];
        ffor(i, 0, n)
        {
            cin>>e[i];
        }
        func(e);
    }
    return 0;
}
