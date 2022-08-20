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
ll t, a, b, x, y, n, p1, p2;
inline ll func()
{
    ll aa=a, bb=b, xx=x, yy=y, nn=n;
    if((aa-nn)<xx)
    {
        ll aux=aa-xx;
        nn-=aux;
        aa=xx;
        if((bb-nn)<yy)
        {
            aux=bb-yy;
            nn-=aux;
            bb=yy;
        }
        else
        {
            bb-=nn;
        }
    }
    else
    {
        aa-=nn;
    }
    p1=aa*bb;
    if((b-n)<y)
    {
        //cout<<"HOHOHOHOHOO"<<endl;
        ll au=b-y;
        n-=au;
        b=y;
        if((a-n)<x)
        {
            au=a-x;
            n-=au;
            a=x;
        }
        else
        {
            a-=n;
        }
    }
    else
    {
        b-=n;
    }
    p2=a*b;
    //dbg(p1);
    //dbg(p2);
    if(p1<p2)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        cout<<func()<<endl;
    }
    return 0;
}
