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

ll n, mi, lo, hi, nn, v, m, res;
int main()
{
    cin>>n;
    if(n<=10)
    {
        cout<<"1"<<endl;
        return 0;
    }
    //nnn=n;
    lo=1;
    hi=n;
    mi=(lo+hi)/2;
    if(n%2==1)
    {
        m=(n/2)+1;
    }
    else
    {
        m=(n/2);
    }
    while(lo<=hi)
    {
        mi=(lo+hi)/2;
        //cout<<"aa"<<endl;
        nn=n;
        v=0;
        //cout<<"mi="<<mi<<endl;
        while(nn>0)
        {
            //cout<<"bb"<<endl;
            if((nn-mi)<0)
            {
                v+=nn;
                nn=0;
            }
            else
            {
                v+=mi;
                nn-=mi;
            }
            nn-=(nn/10);
        }
        //cout<<"V="<<v<<endl;
        if(v>=m)
        {
            res = mi;
            hi=mi-1;
        }
        else
        {
            lo=mi+1;
        }
    }
    cout<<res<<endl;
    return 0;
}
