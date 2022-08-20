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

ll t, n, z, u;
ll func(ll x[], ll y[])
{
    ffor(i, 0, n-1)
    {
        if(x[i]<=x[i+1])
        {
            continue;
        }
        else
        {
            if(z==n || u==n)
            {
                cout<<"No"<<endl;
                return 0;
            }
            else
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        z=u=0;
        cin>>n;
        ll a[n], b[n];
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        ffor(i, 0, n)
        {
            cin>>b[i];
            if(b[i]==0)
            {
                z++;
            }
            else
            {
                u++;
            }
        }
        func(a, b);


    }
    return 0;
}
