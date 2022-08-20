#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
#define pb push_back

typedef long long ll;
ll n, x, aux;
vector <ll> v;
ll mins[10000009], maxs[10000009];
vector <ll> resultados_maximos;
vector <ll> resultados_minimos;
void minimos()//funciona!!!!!!!!
{
    mins[n]=100000009;
    for(ll i=n-1; i>=0; i--)
    {
        mins[i]=min(mins[i+1], v[i]);
    }
}
void maximos()//igual funciona xd
{
    maxs[n]=-100000009;
    for(ll i=n-1; i>=0; i--)
    {
        maxs[i]=max(maxs[i+1], v[i]);
    }
}
ll func()
{
    ffor(i, 0, n-1)
    {
        aux=mins[i+1];
        //cout<<"AUX="<<aux<<endl;
        if(aux>=v[i])
        {
            resultados_minimos.pb(-100000009);
            //cout<<"PB1"<<endl;
        }
        else
        {
            resultados_minimos.pb(v[i]-aux);
            //cout<<"PB2"<<endl;
        }
        aux=maxs[i+1];
        //cout<<"AUX XD="<<aux<<endl;
        if(aux<=v[i])
        {
            resultados_maximos.pb(-100000009);
            //cout<<"PB3"<<endl;
        }
        else
        {
            resultados_maximos.pb(aux-v[i]);
            //cout<<"PB4"<<endl;
        }
    }
    sort(resultados_maximos.begin(), resultados_maximos.end());
    sort(resultados_minimos.begin(), resultados_minimos.end());
    //cout<<"tamaño maximo"<<resultados_maximos.size()<<endl;
    if(resultados_minimos[n-2]>resultados_maximos[n-2])
    {
        cout<<"PELIGROSA"<<endl;
        return 0;
    }
    else
    {
        cout<<"NO PELIGROSA"<<endl;
        return 0;
    }
}
int main()
{
    cin>>n;
    ffor(i, 0, n)
    {
        cin>>x;
        v.pb(x);
    }
    minimos();
    maximos();
    func();
    /*ffor(i, 0, 10)
    {
        cin>>x;
        cout<<mins[x+1]<<endl;
    }*/

    return 0;
}
