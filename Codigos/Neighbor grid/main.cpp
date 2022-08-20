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

ll t, n, m, fake, ze, es;
/*ll func(ll x[][])
{
    if(fake==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(ze==(n*m))
    {
        cout<<"YES"<<endl;
        ffor(i, 0, n)
        {
            ffor(j, 0, m)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    if(x[0][0]>2 || x[0][m-1]>2 || x[n-1][0]>2 || x[n-1][m-1]>2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    ffor(i, 0, n)
    {
        if(x[i][0]>3 || x[i][m-1]>3)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    ffor(j, 0, m)
    {
        if(x[0][j]>3 || x[n-1][j]>3)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    ffor(i, 0, n)
    {
        ffor(j, 0, m)
        {
            if(x[i][j]==0)
            {
                x[i][j]==1;
            }
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        fake=ze=es=0;
        ll x[n][m];
        ffor(i, 0, n)
        {
            ffor(j, 0, m)
            {
                cin>>x[i][j];
                if(x[i][j]>4)
                {
                    fake=1;
                }
                if(x[i][j]==0)
                {
                    ze++;
                }
            }
        }
        if(fake==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(ze==(n*m))
        {
            cout<<"YES"<<endl;
            ffor(i, 0, n)
            {
                ffor(j, 0, m)
                {
                    cout<<x[i][j]<<" ";
                }
                cout<<endl;
            }
            continue;
        }
        if(x[0][0]>2 || x[0][m-1]>2 || x[n-1][0]>2 || x[n-1][m-1]>2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ffor(i, 0, n)
        {
            if(x[i][0]>3 || x[i][m-1]>3)
            {
                cout<<"NO"<<endl;
                es=1;
                break;
            }
        }
        if(es==1)
        {
            continue;
        }
        ffor(j, 0, m)
        {
            if(x[0][j]>3 || x[n-1][j]>3)
            {
                cout<<"NO"<<endl;
                es=1;
                continue;
            }
        }
        if(es==1)
        {
            continue;
        }
        cout<<"YES"<<endl;
        ffor(i, 0, n)
        {
            ffor(j, 0, m)
            {
                if(x[i][j]==0)
                {
                    x[i][j]=1;
                }
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
