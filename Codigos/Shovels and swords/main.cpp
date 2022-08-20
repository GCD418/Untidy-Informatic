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

ll t, a, b, tot1, tot2, aa, bb;
bool x;
ll func()
{
    if(a==0 || b==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if((b/a)>1)
    {
        cout<<a<<endl;
        return 0;
    }
    if((a/b)>1)
    {
        cout<<b<<endl;
        return 0;
    }
    aa=a;
    bb=b;
    while(a>0 && b>0)
    {
        x=0;
        if(a>1 && b>0)
        {
            tot2++;
            a-=2;
            b--;
            x=1;
        }
        if(a>0 && b>1)
        {
            tot2++;
            a--;
            b-=2;
            x=1;
        }
        if(x==0)
        {
            break;
        }

    }
    while(aa>0 && bb>0)
    {
        x=0;
        if(aa>0 && bb>1)
        {
            tot1++;
            aa--;
            bb-=2;
            x=1;
        }
        if(aa>1 && bb>0)
        {
            tot1++;
            aa-=2;
            bb--;
            x=1;
        }
        if(x==0)
        {
            break;
        }
    }
    //cout<<"tot1="<<tot1<<endl;
    //cout<<"tot2="<<tot2<<endl;
    cout<<max(tot1, tot2)<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        tot1=tot2=0;
        cin>>a>>b;
        func();
    }
    return 0;
}
