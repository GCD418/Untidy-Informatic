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
ll n, cont;
string s, r="", aux;
stringstream ss;
int main()
{
    cin>>n>>s;
    s+="  ";
    ffor(i, 0, n+1)
    {
        if(s[i]==s[i+1] && s[i]!=' ')
        {
            cont++;
            continue;
        }
        cont++;
        if(cont<=1)
        {
            r+=s[i];
        }
        else
        {
            //cont++;
            ss<<cont;
            ss>>aux;
            //dbg(aux);
            r+=aux;
            r+=s[i];
        }
        cont=1;

    }
    cout<<r<<endl;
    return 0;
}
