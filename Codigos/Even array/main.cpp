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

ll t, n, aux, c;
ll func(ll x[])
{
    ffor(i, 0, n)
    {
        if(i%2==x[i]%2)
        {
            continue;
        }
        ffor(j, i, n)
        {
            //cout<<"a"<<endl;
            if((i%2==x[j]%2) && (x[j]%2!=j%2))
            {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
                c++;
                break;
            }
        }
    }
    ffor(i, 0, n)
    {
        if(i%2==x[i]%2)
        {
            continue;
        }
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<c<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        c=0;
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        func(a);
    }
    return 0;
}
