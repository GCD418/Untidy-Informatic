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

int t, n;
ll x, s1, s2, ii;
vll numeros;
int func()
{
    ffor(i, 0, n)
    {
        ii=i;
        ii++;
        x=pow(2, (ii));
        numeros.push_back(x);
    }
    s1=numeros.back();
    numeros.pop_back();
    ffor(i, 0, (n/2-1))
    {
        s1+=numeros[i];
    }
    s2=0;
    ffor(i, (n/2-1), n-1)
    {
        s2+=numeros[i];
    }
    cout<<abs(s1-s2)<<endl;
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
