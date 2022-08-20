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

int t, a, b, c, piedras_a, piedras_b, xd, x, y, z;

int func()
{
    x=a;
    y=b;
    z=c;
    piedras_a=piedras_b=0;
    while((a-1)>=0 && (b-2)>=0)
    {
        piedras_a+=3;
        a-=1;
        b-=2;
    }
    while((b-1)>=0 && (c-2)>=0)
    {
        piedras_a+=3;
        b-=1;
        c-=2;
    }
    while((y-1)>=0 && (z-2)>=0)
    {
        piedras_b+=3;
        y-=1;
        z-=2;
    }
    while((x-1)>=0 && (y-2)>=0)
    {
        piedras_b+=3;
        x-=1;
        y-=2;
    }
    xd=max(piedras_a, piedras_b);
    cout<<xd<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        func();
    }
    return 0;
}
