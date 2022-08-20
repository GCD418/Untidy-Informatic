#include <bits/stdc++.h>
using namespace std;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
#define pb 				   push_back
#define mp                 make_pair
//#define dbg(x) cerr<<(#x)<< "=" << (x) << endl
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
//#define PI 				   3.14159265358979323846264338327950
//#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
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
int m, n;
ll cont=0;
//bool r=0;
char a[115][115];
int mx[]= {1, 1, 0, -1, -1, -1, 0, 1};
int my[]= {0, -1, -1, -1, 0, 1, 1, 1};
void func(int x, int y)
{
    int xx, yy;
    a[x][y]='.';
    ffor(i, 0, 8)
    {
        xx=x+mx[i];
        yy=y+my[i];
        if(xx>=0 && yy>=0 && xx<m && yy<n && a[xx][yy]=='@')
        {
            func(xx, yy);
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
    while(1)
    {
        cont=0;
        cin>>m>>n;
        if(m==0)
        {
            return 0;
        }
        ffor(i, 0, m)
        {
            ffor(j, 0, n)
            {
                cin>>a[i][j];
            }
        }
        ffor(i, 0, m)
        {
            ffor(j, 0, n)
            {
                if(a[i][j]=='@')
                {
                    func(i, j);
                    cont++;
                }
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
