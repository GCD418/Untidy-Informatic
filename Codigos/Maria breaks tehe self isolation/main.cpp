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

ll t, n, pers, cantidad, lo, mi, hi;
ll func(ll x[])
{
    sort(x, x+n);
    /*lo=0;
    hi=n;
    mi=(lo+hi)/2;
    cantidad=0;
    while(lo<=hi)
    {
        mi=(lo+hi)/2;
        pers=mi+1;
        if(x[mi]<=pers)
        {
            cout<<"++"<<endl;
            lo=mi+1;
        }
        else
        {
            cout<<"--"<<endl;
            hi=mi-1;
        }
    }
    cout<<"xxxx"<<mi+1<<endl;*/
    pers=1;
    cantidad=0;
    ffor(i, 0, n)
    {
        if(x[i]<=pers)
        {
            pers++;
            cantidad++;
            continue;
        }
        //cout<<"aa"<<endl;
        if((i+1)==x[i])
        {
            //cout<<"bb"<<endl;
            pers+=((i+1)-cantidad);
            cantidad=pers-1;
            continue;
        }

    }
    cout<<cantidad+1<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        func(a);
    }
    return 0;
}
