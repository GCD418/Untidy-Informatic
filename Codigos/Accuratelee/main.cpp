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

ll t, n;
string s, a="     ", r;
ll func()
{
    ffor(i, 0, n)
    {
        if(s[i]=='1' && s[i+1]=='0')
        {
            if(s[i+2]=='0')
            {
                s[i+2]='.';
            }
            s[i]='.';
        }
    }
    ffor(i, 0, n)
    {
        if(s[i]!='.')
        {
            r+=s[i];
        }
    }
    r+="    ";
    ffor(i, 0, sz(r)-3)
    {
        if(r[i]=='1' && r[i+1]=='0')
        {
            if(r[i+2]=='0')
            {
                r[i+2]='.';
            }
            r[i]='.';
        }
    }
     s=r;
    r="";
    ffor(i, 0, n)
    {
        if(s[i]!='.')
        {
            r+=s[i];
        }
    }

    cout<<r<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        r="";
        s+=a;
        func();
    }
    return 0;
}
