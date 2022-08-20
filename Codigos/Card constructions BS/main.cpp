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
const ll m=1000000000;
ll t, n, p, actual, sumar=5, lo, mi, hi;
vll init;
vll :: iterator x;
void ff()
{
    init.pb(2);
    actual=2;
    while(actual<=1000000000)
    {
        actual+=sumar;
        init.pb(actual);
        sumar+=3;
    }

}
ll func()
{
    while(n>=2)
    {
        p++;
        x=(lower_bound(init.begin(), init.end(), n));
        if(*x==n)
        {
            cout<<p<<endl;
            return 0;
        }
        x--;
        n-=*x;
    }
    cout<<p<<endl;
    return 0;
}

int main()
{
    init.clear();
    ff();
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        func();
    }
    return 0;
}
