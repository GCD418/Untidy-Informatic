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
int n, pares=0, x, y;
int main()
{
    cin>>n;
    string s[n];
    ffor(i, 0, n)
    {
        cin>>s[i];
    }
    ffor(i, 0, n)
    {
        ffor(j, 0, n)
        {
            if(s[i][j]=='o')
            {

                if(i==0)
                {
                    if(j==0)
                    {
                        if(s[i][j+1]=='o' && s[i+1][j]=='o')
                        {
                            pares++;
                            continue;
                        }
                    }
                    if(j==(n-1))
                    {
                        if(s[i])
                    }
                }
            }
        }
    }
    return 0;
}
