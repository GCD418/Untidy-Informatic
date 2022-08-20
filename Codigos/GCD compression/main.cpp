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

ll t, n, par, impar, x, aux;
vii a;
ll func(vii v)
{
    if(par==0 || impar==0)
    {
        v.pop_back();
        v.pop_back();
        for(int i=0; i<sz(v); i+=2)
        {
            cout<<i+1<<" "<<i+2<<endl;
        }
        return 0;
    }
    if(par==1 || impar==1)
    {
        ffor(i, 0, sz(v))
        {
            if(v[i].S==1)
            {
                v[i].F=-10;
                break;
            }
        }
        ffor(i, 0, sz(v))
        {
            if(v[i].S==0)
            {
                v[i].F=-10;
                break;
            }
        }
        aux=0;
        for(int i=0; i<sz(v); i++)
        {
            if(v[i].F==-10)
            {
                continue;
            }
            else
            {
                cout<<i+1;
                aux++;
            }
            if(aux%2==0)
            {
                cout<<endl;
            }
            else
            {
                cout<<" ";
            }
        }
        return 0;
    }

    if(par%2==1 && par%2==impar%2)
    {
        ffor(i, 0, sz(v))
        {
            if(v[i].S==1)
            {
                v[i].F=-10;
                break;
            }
        }
        ffor(i, 0, sz(v))
        {
            if(v[i].S==0)
            {
                v[i].F=-10;
                break;
            }
        }
        aux=0;
        for(int i=0; i<sz(v); i++)
        {
            if(v[i].F==-10)
            {
                continue;
            }
            else
            {
                cout<<i+1<<" ";
                ffor(j, i+1, sz(v))
                {
                    if(v[j].S==v[i].S)
                    {
                        cout<<j+1<<endl;
                        v[j].F=-10;
                        break;
                    }
                }
            }
        }
        return 0;
    }

    if(par%2==0 && impar%2==0)
    {
        ffor(i, 0, sz(v))
        {
            if(v[i].S==1)
            {
                v[i].F=-10;
                break;
            }
        }
        ffor(i, 0, sz(v))
        {
            if(v[i].S==1 && v[i].F!=-10)
            {
                v[i].F=-10;
                break;
            }
        }
        aux=0;
        for(int i=0; i<sz(v); i++)
        {
            if(v[i].F==-10)
            {
                continue;
            }
            else
            {
                cout<<i+1<<" ";
                ffor(j, i+1, sz(v))
                {
                    if(v[j].S==v[i].S)
                    {
                        cout<<j+1<<endl;
                        v[j].F=-10;
                        break;
                    }
                }
            }
        }
        return 0;
    }

}
int main()
{
    // par=0; impar==1
    cin>>t;
    while(t--)
    {
        par=impar=0;
        cin>>n;
        a.clear();
        ffor(i, 0, 2*n)
        {
            cin>>x;
            if(x%2==0)
            {
                par++;
                a.pb(mp(x, 0));

            }
            else
            {
                impar++;
                a.pb(mp(x, 1));
            }
        }
        func(a);
    }
    return 0;
}
