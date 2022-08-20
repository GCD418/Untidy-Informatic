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

int t, n;
int func(string s[])
{
    ffor(i, 0, n-1)
    {
        ffor(j, 0, n-1)
        {
            if(s[i][j]-'0'==1)
            {
                if((s[i][j+1]-'0'==1) || (s[i+1][j]-'0'==1))
                {
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a[n];
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        func(a);
    }
    return 0;
}
