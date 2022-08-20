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

ll t, x, y, prueba=0, movs, tiempo;

string s;

ll func()
{
    movs=sz(s);
    ffor(i, 0, movs)
    {
        if(s[i]=='N')
        {
            y++;
        }
        if(s[i]=='S')
        {
            y--;
        }
        if(s[i]=='E')
        {
            x++;
        }
        if(s[i]=='W')
        {
            x--;
        }
        tiempo=i+1;
        if((abs(x)+abs(y))<=tiempo)
        {
            cout<<"Case #"<<prueba<<": "<<tiempo<<endl;
            return 0;
        }
    }
    cout<<"Case #"<<prueba<<": IMPOSSIBLE"<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        prueba++;
        cin>>x>>y>>s;
        func();
    }
    return 0;
}
