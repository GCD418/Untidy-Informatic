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

ll t, n, m, x, y, mex, cant, aux;
set <ll> a;
set <ll> :: iterator it;
vll v;
ll func()
{
    for(it=a.begin(); it!=a.end(); it++)
    {
        v.pb(*it);
    }
    cant=1;
    aux=0;
    ffor(i, 0, sz(v)-1)
    {
        //cout<<"V en"<<i<<"="<<v[i]<<endl;
        if(v[0]!=1)
        {
            if(v[0]==2)
            {
               mex=1;
               aux=-10;
            }
        }
        if((v[i]+1)==v[i+1])
        {
            cant++;
            continue;
        }
        if(aux==0)
        {
            mex=v[i]+1;
            v[i]=mex;
            aux=-10;
            i--;
        }
        else
        {
            break;
        }
    }
    //cout<<"mex="<<mex<<endl;
    if(mex==m)
    {
        cout<<cant<<endl;
        return 0;
    }
    cout<<"-1"<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        a.clear();
        v.clear();
        cin>>n>>m;
        ffor(i, 0, n)
        {
            cin>>x;
            a.insert(x);
        }
        func();
    }
    return 0;
}
