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

ll t, a, b, area, x, y;
ll func()
{
    if(a==b)
    {
        area=2*a;
        area*=area;
        cout<<area<<endl;
        return 0;
    }
    x=min(a, b);
    y=max(a, b);
    if((2*x)>=y)
    {
        area=2*x;
        area*=area;
        cout<<area<<endl;
        return 0;
    }
    area=y;
    area*=area;
    cout<<area<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        func();
    }
    return 0;
}
