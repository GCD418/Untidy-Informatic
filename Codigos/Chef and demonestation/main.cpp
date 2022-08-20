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

ll t, s, n, p, x;
ll func()
{
    if(s==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    if(n>=s)
    {
        if(s%2==0)
        {
            n=s;
        }
        else
        {
            n=(s-1);
        }
    }
    //cout<<"s="<<s<<endl;
    //cout<<"N="<<n<<endl;
    while(s>0)
    {
        x=(s/n);
        s-=(x*n);
        p+=x;
        if(s==1)
        {
            p++;
            break;
        }
        if(s%2==1)
        {
            n=(s-1);
        }
        else
        {
            n=s;
        }
        //cout<<"s="<<s<<endl;
        //cout<<"N="<<n<<endl;
    }
    cout<<p<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>s>>n;
        func();
    }
    return 0;
}
