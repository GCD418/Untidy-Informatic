#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
#define sz(x) (int)(x).size()

typedef long long ll;
char a, b;
ll k;
short int n;
string s, x, y;
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
    x=a;
    y=b;
    s=x+y;
    ffor(i, 0, n-3)
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
    //cout<<"S FINAL="<<s<<endl;
    cout<<s[k-1]<<endl;
    return 0;
}
