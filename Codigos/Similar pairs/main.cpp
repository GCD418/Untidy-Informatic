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

ll t, n, par, impar, z, auximp;
bool caso=false;
ll func(ll x[])
{
    if(((par%2)==0) && ((impar%2)==0))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    sort(x, x+n);
    auximp=0;
    ffor(i, 0, n-1)
    {
        z=x[i+1];
        if(x[i]+1==z)
        {
            auximp++;
        }
    }
    if(auximp%2==0)
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
        ll a[n];
        par=impar=0;
        ffor(i, 0, n)
        {
            cin>>a[i];
            if((a[i]%2)==0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
        func(a);
    }
    return 0;
}
