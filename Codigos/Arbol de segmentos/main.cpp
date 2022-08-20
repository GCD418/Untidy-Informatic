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
ll a[100], T[400];
ll n;
void init(int node=1, int l=0, int r=n-1)
{
    if(l==r)
    {
        T[node]=a[l];
    }
    else
    {
        int mi=(l+r)/2;
        init(2*node, l, mi);
        init(2*node+1, mi+1, r);
        T[node]=(T[2*node]+T[2*node+1]);
    }
}
int query(int x, int y, int node=1, int l=0, int r=n-1)
{
    if(r<x || l>y)
    {
        return 0;
    }
    if(x<=l && r<=y)
    {
        return T[node];
    }
    else
    {
        int mi=(l+r)/2;
        return query(x, y, 2*node, 1, mi) + query(x, y, 2*node+1, mi+1, r);
    }
}
// este código aún no es funcional, error en Función QUERY cuando el intervalo inicial no es 0
int main()
{
    cin>>n;
    ffor(i, 0, n)
    {
        cin>>a[i];
    }
    init();
    /*ffor(i, 0, 4*n)
    {
        cout<<T[i]<<endl;
    }*/
    cout<<query(1, 6)<<endl;;
    return 0;
}
