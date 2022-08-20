#include <bits/stdc++.h>

using namespace std;
#define dbg(x) cerr<(#x)<<"="<<x<<endl
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
#define pb push_back
#define sz(x) (int)(x).size()
typedef long long ll;
ll n;
string x, y;
bool es=0;
vector< pair <string, string> > c;
ll func()
{
    ffor(i, 0, 2)
    {
        ffor(j, (i+1), 3)
        {
            //cout<<"KJJ"<<endl;
            if(c[i].first == c[j].first)
            {
                if(c[j].second == c[i].second)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                es=1;
            }
        }
    }
    if(es==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    ffor(i, 0, 2)
    {
        ffor(j, (i+1), 3)
        {
            if(c[i].second == c[j].second)
            {
                cout<<"SI"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;

}
int main()
{
    cin>>n;
    while(n--)
    {
        c.clear();
        es=0;
        ffor(i, 0, 3)
        {
            cin>>x>>y;
            c.pb(make_pair(x, y));
        }
        func();
    }
    return 0;
}
