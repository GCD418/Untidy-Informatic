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
ll t, a, b, x, y, r, aux, xx;
ll f()
{
    if(a<2 && b<2)
    {
        return 0;
    }
    if(a==0 || b==0)
    {
        return 0;
    }
    x=max(a, b);
    y=min(a, b);
    xx=x;
    xx+=y;
    xx/=3;
    aux=min(xx, y);
    r=min(aux, x);
    return r;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<f()<<endl;
    }
    return 0;
}
