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
ll n, eagles, cont=0;
char a[40][40];
ll mx[]= {1, 1, 0, -1, -1, -1, 0, 1};
ll my[]= {0, -1, -1, -1, 0, 1, 1, 1};
void func(ll x, ll y)
{
    ll nx, ny;
    a[x][y]='0';
    ffor(i, 0, 8)
    {
        nx=mx[i]+x;
        ny=my[i]+y;
        if(nx>=0 && nx<n && ny>=0 && ny<n && a[nx][ny]=='1')
        {
            func(nx, ny);
        }
    }
}
/*void ver()
{
    ffor(i, 0, n)
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
    while(cin>>n)
    {
        eagles=0;
        cont++;
        ffor(i, 0, n)
        {
            ffor(j, 0, n)
            {
                cin>>a[i][j];
            }
        }
        //ver();
        ffor(i, 0, n)
        {
            ffor(j, 0, n)
            {
                if(a[i][j]=='1')
                {
                    eagles++;
                    func(i, j);

                }
            }
        }
        //ver();
        cout<<"Image number "<<cont<<" contains "<<eagles<<" war eagles."<<endl;
    }
    return 0;
}
