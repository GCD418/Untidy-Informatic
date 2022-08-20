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

ll nb, ns, nc, pb, ps, pc, r, cost=0, pan=0, salchicha=0, queso=0, hamburguers=0;
ll lo, mi, hi, x, y, z;
string s;
int main()
{
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    ffor(i, 0, sz(s))
    {
        if(s[i]=='B')
        {
            //cost+=pb;
            pan++;
        }
        if(s[i]=='S')
        {
            //cost+=ps;
            salchicha++;
        }
        if(s[i]=='C')
        {
            //cost+=pc;
            queso++;
        }
    }
    lo=0;
    hi=10000000000000;
    mi=(lo+hi)/2;
    while(lo<=hi)
    {
        //cout<<endl;
        //cout<<"mi="<<mi<<endl;
        x=(mi*pan-nb);
        //cout<<"x="<<x<<endl;
        x*=pb;
        y=(salchicha*mi-ns);
        //cout<<"y="<<y<<endl;
        y*=ps;
        z=(queso*mi-nc);
        //cout<<"z="<<z<<endl;
        z*=pc;
        if(x<0)
        {
            x=0;
        }
        if(y<0)
        {
            y=0;
        }
        if(z<0)
        {
            z=0;
        }
        cost=0;
        cost=(x+y+z);
        if(cost<=r)
        {
            hamburguers=mi;
            lo=mi+1;
        }
        else
        {
            hi=mi-1;
        }
        mi=(lo+hi)/2;
    }
    cout<<hamburguers<<endl;
    return 0;
}
