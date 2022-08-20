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
ll q, p, x, aux;
vll v;
vll m;
void func()
{
    p--;
    v.insert(v.begin()+p, x);
    aux=0;
    ffor(i, 0, sz(v)-1)
    {
        if(v[i]<v[i+1])
        {
            aux++;
        }
        else
        {
            m.pb(aux);
            aux=1;
        }
    }
    m.pb(aux);
    sort(all(m));
    reverse(all(m));
    cout<<m[0]+1<<endl;
    return;
}
int main()
{
    cin>>q;
    while(q--)
    {
        m.clear();
        cin>>p>>x;
        func();
        /*ffor(i, 0, sz(v))
        {
            cout<<v[i]<<" ";
        }*/
    }
    return 0;
}
