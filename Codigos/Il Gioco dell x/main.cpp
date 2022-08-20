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
int n, contador=0, aux, k;
bool r;
char a[220][220];
int mx[]={1, 0, 1};
int my[]={0, 1, 1};
void ver()
{
    ffor(i, 0, n)
    {
        ffor(j, 0, n)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
void func(int x, int y)
{
    //cout<<"KJJKJKJ"<<endl;
    if(aux>=4 && x==n-1)
    {
        r=1;
        return;
    }
    aux++;
    int xx, yy;
    a[x][y]='a';
    ffor(i, 0, 3)
    {
        //cout<<"AAAAAAAAA"<<endl;
        xx=x+mx[i];
        //dbg(xx);
        yy=y+my[i];
        //dbg(yy);
        if(xx>=0 && yy>=0 && xx<n && yy<n && a[xx][yy]=='w')
        {
            //cout<<"BBBBBB"<<endl;
            func(xx, yy);
        }
    }
}
int main()
{
    while(true)
    {
        cin>>n;
        //dbg(n);
        if(n==0)
        {
            return 0;
        }
        contador++;
        ffor(i, 0, n)
        {
            ffor(j, 0, n)
            {
                cin>>a[i][j];
            }
        }
        r=0;
        k=0;
        ffor(i, 0, n)
        {
            if(a[i][0]=='w')
            {
                aux=0;
                func(i, k);
                /*if(aux>=4)
                {
                    //cout<<"KJKJ"<<endl;
                    cout<<contador<<" W"<<endl;
                    //r=1;
                    break;
                }*/
                //dbg(aux);
            }
        }
        //ver();
        if(r==1)
        {
            cout<<contador<<" W"<<endl;
        }
        else
        {
            cout<<contador<<" B"<<endl;
        }
    }

    return 0;
}
