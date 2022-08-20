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

ll t, n, k, x, y, sits;
string s;
ll func()
{
    ffor(i, 0, n)
    {
        x=y=0;
        if(s[i]=='0')
        {
            for(int j=i; j<(j+k), j<n; j++)
            {
                //cout<<"j="<<j<<endl;
                if(s[j]=='1')
                {
                    x++;
                    break;
                }
                if(j==(i+k))
                {
                    break;
                }
            }
            for(int j=i; j>(j-k), j>=0; j--)
            {
                if(s[j]=='1')
                {
                    y++;
                    break;
                }
                if(j==(i-k))
                {
                    break;
                }
            }
            //cout<<"x="<<x<<endl;
            //cout<<"y="<<y<<endl;
            if(x==0 && y==0)
            {
                s[i]='1';
                sits++;
            }
        }
    }
    cout<<sits<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        x=y=0;
        sits=0;
        cin>>n>>k>>s;
        func();
    }
    return 0;
}
