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
ll const grupo=7;
ll a[4]={1, 2, 1, 3};
ll t, n, g, aux, x, y;
ll func()
{
    x=n/10;
    g=n/4;
    aux=n%4;
    g*=grupo;
    ffor(i, 0, aux)
    {
        g+=a[i];
    }
    cout<<g<<endl;
    /*y=(x)^(g);
    cout<<y<<endl;
    cout<<g+y<<endl;*/
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        func();
    }
    return 0;
}