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

ll a, b, x, y;
int main()
{
    cin>>a>>b;
    if(a==9 && b==1)
    {
        cout<<"9 10"<<endl;
        return 0;
    }
    if((b-a)>1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(a>b)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(a==b)
    {
        x=a*10;
        y=x+1;
        cout<<x<<" "<<y<<endl;
        return 0;
    }
    y=b*10;
    x=y-1;
    cout<<x<<" "<<y<<endl;
    return 0;
}
