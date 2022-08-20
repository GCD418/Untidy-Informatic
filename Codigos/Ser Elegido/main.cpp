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
ll n, x;
vll v;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>x;
        v.pb(x);
    }
    sort(all(v));
    ffor(i, 0, sz(v)-1)
    {
        if(v[i]>=2 && i==0)
        {
            cout<<"1"<<endl;
            return 0;
        }
        if(v[i]+1==v[i+1] || v[i]==v[i+1])
        {
            continue;
        }
        else
        {
            cout<<v[i]+1<<endl;
            return 0;
        }
    }
    cout<<v.back()+1<<endl;
    return 0;
}
