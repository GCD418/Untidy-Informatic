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

long long n, m, bi, lo, mi, hi, aux;
vll e;
ll func(ll x[])
{
    aux=0;
    lo=0;
    hi=n-1;
    mi=(lo+hi)/2;
    while(lo<=hi)
    {
        if(x[mi]<=bi)
        {
            aux+=(mi-lo)+1;
            lo=mi+1;
        }
        else
        {
            hi=mi-1;
        }
        mi=(hi+lo)/2;
    }
    e.push_back(aux);
    return 0;
}

int main()
{
    e.clear();
    cin>>n>>m;
    ll a[n], b[m];
    ffor(i, 0, n)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    ffor(i, 0, m)
    {
        cin>>b[i];
        bi=b[i];
        func(a);
    }
    ffor(i, 0, m)
    {
        cout<<e[i]<<" ";
    }
    cout<<endl;
    return 0;
}
