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
ll t, n, minimo, malo;
ll a[1000000], T[4000000];
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
        T[node]=min(T[2*node], T[2*node+1]);
    }
}
int query(int x, int y, int node=1, int l=0, int r=n-1)
{
    if(r<x || l>y)
    {
        return INF;
    }
    if(x<=1 && r<=y)
    {
        return T[node];
    }
    else
    {
        int mi=(l+r)/2;
        return min(query(x, y, 2*node, l, mi), (query(x, y, 2*node+1, mi+1, r)));
    }
}
ll func()
{
    ffor(i, 0, n-1)
    {
        minimo=query(i+1, n);
        if(a[i]>minimo)
        {
            malo++;
        }
    }
    cout<<malo<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        malo=0;
        cin>>n;
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        init();
        func();
    }
    return 0;
}
