#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
#define pb push_back
#define sz(x) (int)(x).size()
typedef long long ll;
int n;
ll p, k, q, x;
string master, s;
ll func()
{
    ffor(j, 0, k)
    {
        master.insert((p+(sz(s)*(j))), s);
    }
}
int main()
{
    cin>>n;
    master="............................................................................................................................................................................................................................................................................................................................................";
    ffor(i, 0, n)
    {
        cin>>p>>k>>s;
        func();
        //cout<<master<<endl;
    }
    //cout<<master<<endl;
    cin>>q;
    ffor(i, 0, q)
    {
        cin>>x;
        if(master[x]=='.')
        {
            cout<<"a"<<endl;
            continue;
        }
        cout<<master[x]<<endl;
    }

    return 0;
}
