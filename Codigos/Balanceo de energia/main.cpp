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

ll n, t, x, y, q, au, di, tot;
int main()
{
    cin>>n>>t>>x>>y;
    ll p[n];
    ffor(i, 0, n)
    {
        cin>>p[i];
    }
    while(t--)
    {
        tot=0;
        au=di=0;
        cin>>q;
        ffor(i, 0, n)
        {
            if(p[i]==q)
            {
                continue;
            }
            if(p[i]<q)
            {
                au+=(q-p[i]);
            }
            else
            {
                di+=(p[i]-q);
            }
        }
        tot=((au*x)+(di*y));
        cout<<tot<<endl;
    }
    return 0;
}
