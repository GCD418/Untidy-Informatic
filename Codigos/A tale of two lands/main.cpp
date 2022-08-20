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

ll n, pares=0, lo, hi, mi, vec1, vec2, arr1, arr2, x;
int main()
{
    cin>>n;
    ll a[n];
    ffor(i, 0, n)
    {
        cin>>x;
        a[i]=abs(x);
    }
    sort(a, a+n);
    lo=0;
    hi=n-1;
    mi=(lo+hi)/2;
    while(lo<=hi)
    {
        mi=(lo+hi)/2;
        vec1=abs(a[lo]-a[hi]);
        vec2=abs(a[lo]+a[hi]);
        arr1=abs(a[lo]);
        arr2=abs(a[hi]);
        if(arr1>=vec1 && arr2<=vec2)
        {
            cout<<"aa"<<endl;
            cout<<"LO="<<lo<<endl;
            cout<<"HI="<<hi<<endl;
            cout<<"MI="<<mi<<endl;
            pares+=(mi);
            lo=mi+1;
        }
        else
        {
            hi=mi-1;
        }
    }
    cout<<pares<<endl;
    return 0;
}
