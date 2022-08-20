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

ll t, n, m, x, y, w, simp, dob, cost;

ll func(string ss[])
{
    w=0;
    if(y>=(2*x))
    {
        ffor(i, 0, n)
        {
            ffor(j, 0, m)
            {
                if(ss[i][j]=='.')
                {
                    w++;
                }
            }
        }
        cout<<(w*x)<<endl;
        return 0;
    }
    simp=dob=0;
    ffor(i, 0, n)
    {
        ffor(j, 0, m)
        {
            if(ss[i][j]=='.')
            {
                if(ss[i][j+1]=='.')
                {
                    dob++;
                    j++;
                }
                else
                {
                    simp++;
                }
            }
        }
    }
    cost=(simp*x)+(dob*y);
    cout<<cost<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y;
        string s[n];
        ffor(i, 0, n)
        {
            cin>>s[i];
            s[i]+="  ";
        }
        func(s);
    }
    return 0;
}
