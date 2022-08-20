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

ll t, a, b, n, m, dif_g, aa, bb, nn, mm;
ll func()
{
    if((a+b)<(n+m))
    {
        cout<<"No"<<endl;
        return 0;
    }
    if((b-m)>a && a>n)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    aa=a;
    bb=b;
    nn=n;
    mm=m;
    if(aa>bb)
    {
        dif_g=aa-bb;
        bb-=mm;
        if(bb>=0)
        {
            if(aa>nn)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
            else
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
        dif_g=abs(bb);
        if((aa-nn)>0 && )
    }

}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>m;
        func();
    }
    return 0;
}
