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

ll t, n, k, suma, x, a;
vll sumas;
bool st;

ll pares()
{
    a=2;
    suma=0;
    ffor(i, 0, k-1)
    {
        sumas.pb(a);
        suma+=a;
        if(i==(k-2))
        {
            x=(n-suma);
            if(x%2==0 && x>0)
            {
                sumas.pb(x);
            }
            else
            {
                return 0;
            }
        }
    }
    st=true;
    cout<<"YES"<<endl;
    ffor(i, 0, sz(sumas))
    {
        cout<<sumas[i]<<" ";
    }
    cout<<endl;
    return 0;
}
ll impares()
{
    a=1;
    suma=0;
    ffor(i, 0, k-1)
    {
        sumas.pb(a);
        suma+=a;
        if(i==(k-2))
        {
            x=(n-suma);
            if(x%2==1 && x>0)
            {
                sumas.pb(x);
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    st=true;
    cout<<"YES"<<endl;
    ffor(i, 0, sz(sumas))
    {
        cout<<sumas[i]<<" ";
    }
    cout<<endl;
    return 0;
}
ll func()
{
    if(k==1)
    {
        cout<<"YES"<<endl;
        cout<<n<<endl;
        return 0;
    }
    st=false;
    suma=0;
    sumas.clear();
    pares();
    if(st==false)
    {
        sumas.clear();
        impares();
    }
    return 0;

}

int main()
{
    cin>>t;
    while(t--)
    {
        sumas.clear();
        cin>>n>>k;
        func();
    }
    return 0;
}
