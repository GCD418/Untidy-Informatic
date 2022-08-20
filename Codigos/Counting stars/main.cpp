#include <bits/stdc++.h>
using namespace std;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
#define pb 				   push_back
#define mp                 make_pair
#define dbg(x) cerr<<(#x)<< "=" << (x) << endl
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI 				   3.14159265358979323846264338327950
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define endl 			   '\n'
#define sz(x)              ((int)(x).size())
typedef long long          ll;
typedef pair < int, int >  pii;
typedef deque < ll> dll;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi > 	   gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);
int n, m, stars;
char a[106][106];
ll veces;
int mx[]= {1, 1, 0, -1, -1, -1, 0, 1};
int my[]= {0, -1, -1, -1, 0, 1, 1, 1};
void func(int x, int y)
{
    a[x][y]='@';
    veces++;
    int nx, ny;
    ffor(i, 0, 8)
    {
        nx=x+mx[i];
        ny=y+my[i];
        if(nx<n && ny<m && nx>=0 && ny>=0 && a[nx][ny]=='*')
        {
            func(nx, ny);
        }
    }
}
/*void ver()
{
    ffor(i, 0, m)
    {
        ffor(j, 0, n)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}*/
int main()
{
    while(true)
    {
        stars=veces=0;
        cin>>n>>m;
        if(n==0 && m==0)
        {
            return 0;
        }
        ffor(i, 0, n)
        {
            ffor(j, 0, m)
            {
                cin>>a[i][j];
            }
        }
        //ver();
        ffor(i, 0, n)
        {
            ffor(j, 0, m)
            {
                if(a[i][j]=='*')
                {
                    veces=0;
                    func(i, j);
                    if(veces==1)
                    {
                        stars++;
                    }
                }
            }
        }
        //ver();
        cout<<stars<<endl;
    }
    return 0;
}
