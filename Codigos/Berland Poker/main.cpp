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

ll t;
long double n, m, k, c, x, y;

ll func()
{
    c=n/k;
    if(m==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(c>=m)
    {
        cout<<m<<endl;
        return 0;
    }
    m-=c;
    x=ceil(m/(k-1));
    if(x<=c)
    {
        cout<<c-x<<endl;
        return 0;
    }
    cout<<"0"<<endl;
    return 0;




}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        func();
    }
    return 0;
}
