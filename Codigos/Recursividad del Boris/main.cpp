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
string a, b;
ll aux, n;
ll contador=-1;
string x="", y="";
string func(string s="")
{
    contador++;
    if(a[contador]=='.' && b[contador]=='.')
    {
        return s;
    }
    x+=func(s+a[contador]);
    dbg(x);
    y+=func(s+a[contador]);
    dbg(y);
    return x;
}
int main()
{
    cin>>a>>b;
    reverse(all(a));
    reverse(all(b));
    a.resize(23, '.');
    b.resize(23, '.');
    //a.pb('Q');
    dbg(a);
    dbg(b);
    cout<<func()<<endl;
    /*ffor(i, 0, sz(diga))
    {
        cout<<diga[i]<<" ";
    }
    cout<<endl;
    ffor(i, 0, sz(digb))
    {
        cout<<digb[i]<<" ";
    }*/

    cout<<endl;
    return 0;
}
