#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
#define sz(x) (int)(x).size()
typedef long long ll;
char a, b;
ll k, aux, tam;
short int n;
string s, x, y;
vector <ll> v;
void init()
{
    v.push_back(1);
    v.push_back(1);
    ffor(i, 0, 100)
    {
        aux=v[i]+v[i+1];
        v.push_back(aux);
    }
}
int main()
{
    cin>>a>>b>>n>>k;
    if(n==1)
    {
        cout<<a<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<b<<endl;
        return 0;
    }
    init();
    tam=v[n-1]-k;
    x=a;
    y=b;
    s=x+y;
    ffor(i, 0, 15)
    {
        //cout<<"S="<<s<<endl;
        x=s;
        reverse(s.begin(), s.end());
        reverse(y.begin(), y.end());
        //cout<<"Y="<<y<<endl;
        s+=y;
        y=x;
        reverse(s.begin(), s.end());

    }
    reverse(s.begin(), s.end());
    cout<<s[tam]<<endl;
    return 0;
}
