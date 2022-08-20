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

ll t, a, b, op, x, y, z;
long double aux;
ll num[3]={8, 4, 2};
ll func()
{
    if(a==b)
    {
        cout<<"0"<<endl;
        return 0;
    }
    x=max(a, b);
    y=min(a, b);
    if(x%y!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    op=0;
    z=x/y;
    if(z%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    op++;
    if(z==8 || z==4 || z==2)
    {
        cout<<"1"<<endl;
        return 0;
    }
    aux=ceil(log(z)/log(8));
    cout<<aux<<endl;
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
