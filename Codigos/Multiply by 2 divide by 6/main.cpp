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

ll t, n, p, x;
ll func()
{
    p=0;
    while(n>1)
    {
        //cout<<"aa"<<endl;
        //cout<<"N="<<n<<endl;
        if(n%6==0)
        {
            n/=6;
            p++;
            continue;
        }
        if((n*2)%6==0)
        {
            n*=2;
            p++;
            continue;
        }
        cout<<"-1"<<endl;
        return 0;

    }
    cout<<p<<endl;
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
