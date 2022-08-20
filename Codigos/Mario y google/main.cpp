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
ll t, aux, caso=1, x, y;
vector < string > m;
string s;
vector < pair< ll, ll> > v;
vi posiciones;
inline void func()
{
    sort(all(v));
    reverse(all(v));
    ffor(i, 0, sz(v)-1)
    {
        y=v[i].S;
        //dbg(y);
        posiciones.pb(y);
        if(v[i].F!=v[i+1].F)
        {
            break;
        }

    }
    sort(all(posiciones));

    cout<<"Case #"<<caso<<":"<<endl;
    ffor(i, 0, sz(posiciones))
    {
        x=posiciones[i];
        cout<<m[x]<<endl;
    }
    return;
}
int main()
{
    cin>>t;
    while(t--)
    {
        m.clear();
        v.clear();
        posiciones.clear();
        ffor(i, 0, 10)
        {
            cin>>s>>aux;
            m.pb(s);
            v.pb(mp(aux, i));
        }
        func();
        caso++;
    }
    return 0;
}
