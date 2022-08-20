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

int n;
vector <map <char, int> > mapa;
ll lenguajes, eq;
int main()
{
    cin>>n;
    lenguajes=n;
    string s[n];
    mapa.clear();
    ffor(i, 0, n)
    {
        cin>>s[i];
    }
    ffor(i, 0, n)
    {
        ffor(j, 0, sz(s[i]))
        {
            s[i][j]=tolower(s[i][j]);
        }
    }
    ffor(i, 0, n)
    {
        sort(all(s[i]));
    }
    sort(s, s+n);
    ffor(i, 0, n-1)
    {
        eq=0;
        ffor(j, 0, sz(s[i]))
        {
            if(s[i][j]==s[i+1][j])
            {
                eq++;
            }
        }
        if(eq==sz(s[i]) && eq==sz(s[i+1]))
        {
            lenguajes--;
        }
    }
    cout<<lenguajes<<endl;
    return 0;
}
