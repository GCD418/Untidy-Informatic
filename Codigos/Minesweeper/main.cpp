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
ll contador=0;
int mx[]= {1, 1, 0, -1, -1, -1, 0, 1};
int my[]= {0, -1, -1, -1, 0, 1, 1, 1};
char r[110][110];
char a[110][110];
int n, m;
inline void limpiar()
{
    ffor(i, 0, 110)
    {
        ffor(j, 0, 110)
        {
            r[i][j]='0';
        }
    }
    return;
}
void func(int x, int y)
{
    r[x][y]='*';
    int xx, yy, aux;
    ffor(k, 0, 8)
    {
        xx=x+mx[k];
        yy=y+my[k];
        //dbg(xx);
        //dbg(yy);
        if(xx<n && yy<m && xx>=0 && yy>=0 && r[xx][yy]!='*')
        {
            aux=r[xx][yy]-'0';
            //dbg(aux);
            aux++;
            r[xx][yy]=char(aux+'0');
        }
    }
}
inline void mostrar()
{
    cout<<"Field #"<<contador<<':'<<endl;
    ffor(i, 0, n)
    {
        ffor(j, 0, m)
        {
            cout<<r[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0 && m==0)
        {
            return 0;
        }
        cout<<endl;
        contador++;
        limpiar();
        ffor(i, 0, n)
        {
            ffor(j, 0, m)
            {
                cin>>a[i][j];
            }
        }
        ffor(i, 0, n)
        {
            ffor(j, 0, m)
            {
                if(a[i][j]=='*')
                {
                    func(i, j);
                }
            }
        }
        mostrar();
    }
    return 0;
}
