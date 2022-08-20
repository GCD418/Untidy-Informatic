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
ll n, suma_negativa, suma_positiva, su;
void func(ll x[])
{
    su=0;
    for(ll i=0; i<2*n; i+=n)
    {
        suma_negativa=suma_positiva=0;
        ffor(j, i, n+i)
        {
            if(x[j]<0)
            {
                suma_negativa+=x[j];
            }
            else
            {
                suma_positiva+=x[j];
            }
        }
        if(abs(suma_negativa)>suma_positiva)
        {
            ffor(j, i, n+i)
            {
                if(x[j]>0)
                {
                    x[j]=(-x[j]);
                }
                else
                {
                    x[j]=abs(x[j]);
                }
            }
        }
    }
    ffor(i, 0, 2*n)
    {
        su+=x[i];
    }
    cout<<su<<endl;
    return;
}
int main()
{
    cin>>n;
    ll a[2*n];
    ffor(i, 0, 2*n)
    {
        cin>>a[i];
    }
    func(a);
    return 0;
}
