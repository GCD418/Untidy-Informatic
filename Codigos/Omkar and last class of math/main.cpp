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

ll t, n, di, x, y;
vll v;
ll func()
{
    di=0;
    if(n%2==0)
    {
        cout<<n/2<<" "<<n/2<<endl;
        return 0;
    }
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            di++;
        }
        if(di>1)
        {
            break;
        }
    }
    if(di==1)
    {
        cout<<"1 "<<n-1<<endl;
        return 0;
    }
    for(ll i=sqrt(n); i<n; i+=2)
    {
        x=n-i;
        y=sqrt(n);
        y--;
        if((y*i)==x)
        {
            cout<<i<<" "<<x<<endl;
            return 0;
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        func();
    }
    return 0;
}
