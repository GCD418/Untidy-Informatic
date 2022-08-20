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

ll t, k, n, aux, numeros, i, n2;

ll func()
{
    if(k<n)
    {
        cout<<k<<endl;
        return 0;
    }
    i=1;
    numeros=0;
    while(aux<(2*k))
    {
        if((aux)==(k-n))
        {
            n2=numeros;
        }
        aux=n*i;
        numeros++;
        i++;
    }
    cout<<n2<<endl;
    cout<<numeros<<endl;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        func();
    }
    return 0;
}
