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

ll t, m;
long double x, base, i;
vll sumandos;
ll func(ll n)
{
    i=0;
    while((n/10)>0 || n%10!=0)
    {
       x=0;
       if((n%10)!=0)
       {
           x=n%10;
           //cout<<pow(10, i)<<endl;
           base=pow(10, i);
           x*=base;
           //cout<<x<<endl;
           sumandos.pb(x);
       }
       n/=10;
       //cout<<n<<endl;
       i++;
    }
    cout<<sz(sumandos)<<endl;
    ffor(i, 0, sz(sumandos))
    {
        cout<<sumandos[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        sumandos.clear();
        cin>>m;
        func(m);
    }
    return 0;
}
