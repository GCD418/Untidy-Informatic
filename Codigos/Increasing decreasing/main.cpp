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

ll t, n, aux;
vll de;
ll func(ll x[])
{
    aux=-10;
    sort(x, x+n);
    if(x[n-1]==x[n-2])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    ffor(i, 0, n-1)
    {
        if(aux==x[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(x[i]==x[i+1])
        {
            aux=x[i];
            de.pb(x[i+1]);
            x[i+1]=-5;
            i++;
        }
    }
    sort(all(de));
    reverse(all(de));
    cout<<"YES"<<endl;
    ffor(i, 0, n)
    {
        if(x[i]==-5)
        {
            continue;
        }
        cout<<x[i]<<" ";
    }
    ffor(i, 0, sz(de))
    {
        cout<<de[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        de.clear();
        cin>>n;
        ll a[n];
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        func(a);
    }
    return 0;
}
