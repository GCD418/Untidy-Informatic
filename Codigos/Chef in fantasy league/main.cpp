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

int t, n, s, def, del;
vi precio_def;
vi precio_del;
int func(int x[], int y[])
{
    precio_def.clear();
    precio_del.clear();
    if(def==n || del==n)
    {
        cout<<"no"<<endl;
        return 0;
    }
    ffor(i, 0, n)
    {
        if(y[i]==0)
        {
            precio_def.pb(x[i]);
        }
        else
        {
            precio_del.pb(x[i]);
        }
    }
    sort(all(precio_def));
    sort(all(precio_del));
    s+=precio_def.front();
    s+=precio_del.front();
    if(s<=100)
    {
        cout<<"yes"<<endl;
        return 0;
    }
    cout<<"no"<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        def=0;
        del=0;
        cin>>n>>s;
        int prices[n];
        int pos[n];
        ffor(i, 0, n)
        {
            cin>>prices[i];
        }
        ffor(i, 0, n)
        {
            cin>>pos[i];
            if(pos[i]==0)
            {
                def++;
            }
            else
            {
                del++;
            }
        }
        func(prices, pos);
    }
    return 0;
}
