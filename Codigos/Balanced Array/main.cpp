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
ll t, n, divisibilad, x, y, suma_p, suma_i;
vll numeros;
ll func()
{
    x=2;
    y=1;
    suma_p=suma_i=0;
    divisibilad=n/2;
    if(divisibilad%2==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    ffor(i, 0, n/2)
    {
        numeros.pb(x);
        suma_p+=x;
        x+=2;
    }
    ffor(i, 0, (n/2-1))
    {
        numeros.pb(y);
        suma_i+=y;
        y+=2;
    }
    numeros.pb(suma_p-suma_i);
    cout<<"YES"<<endl;
    ffor(i, 0, n)
    {
        cout<<numeros[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        numeros.clear();
        cin>>n;
        func();
    }
    return 0;
}
