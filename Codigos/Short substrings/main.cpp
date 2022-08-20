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
string s, a="";
ll func()
{
    if(sz(s)==2)
    {
        cout<<s<<endl;
        return 0;
    }
    for(int i=2; i<sz(s); i+=2)
    {
        s[i]='X';
    }
    ffor(i, 0, sz(s))
    {
        if(s[i]=='X')
        {
            continue;
        }
        a+=s[i];
    }
    cout<<a<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        a="";
        cin>>s;
        func();
    }
    return 0;
}
