#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
#define pb push_back
#define sz(x) (int)(x).size()
typedef long long ll;
ll x, n, a, aux, y;
int main()
{
    cin>>x>>n>>a;
    aux=x/a;
    //cerr<<"aux="<<aux<<endl;
    y=x%a;
    //cerr<<"Y="<<y<<endl;
    if(aux%2==1 && y==0)
    {
        cout<<"G"<<endl;
        return 0;
    }
    if(aux%2==0 && y>0)
    {
        cout<<"G"<<endl;
        return 0;
    }
    cout<<"P"<<endl;
    return 0;
}
