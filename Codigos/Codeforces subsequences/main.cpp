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

ll k, x, t;
string s="codeforces", y;
//map <ll, string> m;
vector <string> v;

int main()
{
    y="";
    ffor(i, 0, (100000-1))
    {
        y+="s";
    }
    v.pb(y);
    y="";
    ffor(i, 0, 99)
    {
        y+='s';
    }
    v.pb(y);
    v.pb("sssssssss");
    v.pb("");
    cin>>k;
    k--;
    cout<<"sz="<<sz(v[0])<<endl;
    ffor(i, 0, sz(v))
    {
        cout<<"sjkj"<<endl;
        t=sz(v[i]);
        while(k>=t)
        {
            cout<<"xx"<<endl;
            s+=v[x];
            k-=sz(v[x]);
        }
    }
    cout<<s<<endl;
    return 0;
}
