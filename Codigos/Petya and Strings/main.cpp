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
string s, t;
char a='a';
int main()
{
    cin>>s>>t;
    for(int i=0; i<s.size(); i++)
    {
        s[i]=toupper(s[i]);
        t[i]=toupper(t[i]);
    }
    if(s<t)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(t<s)
    {
        cout<<"1"<<endl;
        return 0;
    }
    if(s==t)
    {
        cout<<"0"<<endl;
        return 0;
    }
    return 0;
}
