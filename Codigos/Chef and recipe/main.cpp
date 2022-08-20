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

ll t, n, x;
map<ll, ll> a;
vll cantidades;
vll numeros;

int func()
{
    ffor(i, 0, n)
    {
        cin>>x;
        numeros.pb(x);
    }
    ffor(i, 0, n-1)
    {
        if(numeros[i]==numeros[i+1])
        {
            a[x]++;
            continue;
        }
        x=numeros[i];
        cout<<"aaa"<<a[x-1]<<endl;
        if(a.count(x)==0)
        {
            a[x]=a[x]+1;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    for(map <long long, long long>:: iterator it=a.begin(); it!=a.end(); it++)
    {
        cantidades.pb(it->second);
    }
    sort(all(cantidades));
    ffor(i, 0, sz(cantidades)-1)
    {
        if(cantidades[i]==cantidades[i+1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cantidades.clear();
        cin>>n;
        a.clear();
        numeros.clear();
        func();

    }
    return 0;
}
