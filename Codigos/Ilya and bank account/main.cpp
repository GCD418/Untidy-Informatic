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

ll n, ult, pen, t;
string s;
stringstream ss;
int main()
{
    cin>>n;
    if(n>0)
    {
        cout<<n<<endl;
        return 0;
    }
    ult=abs(n%10);
    pen=abs(n%100);
    pen/=10;
    ss<<n;
    ss>>s;
    t=sz(s);
    if(pen>ult)
    {
        s[t-2]=s[t-1];
        s.erase(t-1);
        //cout<<sz(s)<<endl;
        if((s[1]-'0')==0)
        {
            cout<<"0"<<endl;
            return 0;
        }
        cout<<s<<endl;
        return 0;
    }
    s.erase(t-1);
    cout<<s<<endl;
    return 0;
}
