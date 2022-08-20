#include <bits/stdc++.h>
using namespace std;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
#define pb 				   push_back
#define mp                 make_pair
#define dbg(x) cerr<<(#x)<< "=" << (x) << endl
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI 				   3.14159265358979323846264338327950
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define endl 			   '\n'
#define sz(x)              ((int)(x).size())
typedef long long          ll;
typedef pair < int, int >  pii;
typedef deque < ll> dll;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi > 	   gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);
ll t, n;
inline bool func(ll x[])
{
    ll a, b, c;
    a=x[0];
    b=x[n-1];
    c=x[1];
    if(c>(abs(a-b)))
    {
        if(a>(abs(b-c)))
        {
            if(b>(abs(a-c)))
            {
                return 0;
            }
        }
    }
    return 1;

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
        if(func(a))
        {
            cout<<"1 2 "<<n<<endl;
            continue;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
