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

ll t, x, y, a, b, menor, y2, aux1, aux2;

ll opt1()
{
    aux1=((x+y)*a);
    return 0;
}

ll opt2()
{
    menor=min(x, y);
    x-=menor;
    y-=menor;
    aux2=(b*menor);
    aux2+=((x+y)*a);
    return 0;
}

ll func()
{
    if(x==0)
    {
        cout<<y*a<<endl;
        return 0;
    }
    if(y==0)
    {
        cout<<x*a<<endl;
        return 0;
    }
    opt1();
    opt2();
    cout<<min(aux1, aux2)<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        func();
    }
    return 0;
}
