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

ll t, n, x, y, z, es;
ll func(ll a[])
{
    for(ll i=1; i<n-1; i++)
    {
        es=0;
        for(ll j=i-1; j>=0; j--)
        {
            if(a[j]<a[i])
            {
                x=j;
                break;
                es=1;
            }
        }
        if(es==1)
        {
            for(ll j=i+1; j<n; j++)
            {
                if(a[j]<a[i])
                {
                    z=j;
                    y=i;
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<y<<" "<<z<<endl;
                    return 0;
                }
            }
        }
        else
        {
            continue;
        }
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
        ll ar[n];
        ffor(i, 0, n)
        {
            cin>>ar[i];
        }
        func(ar);
    }
    return 0;
}
