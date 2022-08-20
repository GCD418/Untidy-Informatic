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
ll N=10000000, C[10000001], n, impar, aux, impar2;
vll v;
vii resultado;
void iniciar_criba()
{
    for(int i=0; i<=N; i++)
    {
        C[i]=i;
    }
    C[0]=-1;
    C[1]=-1;
    for(int i=2; i*i<=N; i++)
    {
        if(C[i]==i)
        {
            for(int j=i+i; j<=N; j+=i)
            {
                C[j]=i;
            }
        }
    }
}
void fp(int x)
{
    if(x<=1)return;
    int a=1;
    int y=x/C[x];
    while(C[x]==C[y])
    {
        a++;
        y=y/C[y];
    }
    fp(y);
    v.pb(C[x]);
}
ll func(ll w)
{
    v.clear();
    fp(w);
    if(sz(v)==1)
    {
        resultado.pb(mp(-1, -1));
        return 0;
    }
    impar=-5;
    aux=-2;
    impar2=-6;
    ffor(i, 0, sz(v))
    {
        if(v[i]%2==0)
        {
            aux=v[i];
        }
        if(impar<0)
        {
            if(v[i]%2==1)
            {
                impar=v[i];
                v[i]==0;
            }
        }
        if(v[i%2]==1)
        {
            impar2=v[i];
        }
    }
    if(impar<0)
    {
        resultado.pb(mp(-1, -1));
        return 0;
    }
    if(aux<0)
    {
        if(impar2<0)
        {
            resultado.pb(mp(-1, -1));
            return 0;
        }
        resultado.pb(mp(impar, impar2));
        return 0;
    }
    resultado.pb(mp(aux, impar));
    return 0;
}
int main()
{
    iniciar_criba();
    cin>>n;
    ll ar[n];
    ffor(i, 0, n)
    {
        cin>>ar[i];
        func(ar[i]);
    }
    ffor(i, 0, n)
    {
        cout<<resultado[i].F<<" ";
    }
    cout<<endl;
    ffor(i, 0, n)
    {
        cout<<resultado[i].S<<" ";
    }
    cout<<endl;

    return 0;
}
