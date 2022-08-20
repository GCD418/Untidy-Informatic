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

ll n, k, x, aux, aux2;
map <char, ll> mapa;
vector < pair<ll, ll> > v;
char l;
string cambio;
int main()
{
    fast;
    v.clear();
    mapa.clear();
    cin>>n>>k;
    string s[n];
    for(char i='A'; i<='Z'; i++)
    {
        cin>>x;
        mapa[i]=x;
    }
    ffor(i, 0, n)
    {
        cin>>s[i];
        aux=0;
        ffor(j, 0, sz(s[i]))
        {
            l=s[i][j];
            aux+=mapa[l];
        }
        v.pb(mp(aux, i));
    }
    sort(all(v));
    aux=v[k].S;
    cout<<s[aux]<<endl;

    return 0;
}
