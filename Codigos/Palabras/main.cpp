#include <bits/stdc++.h>

using namespace std;
#define dbg(x) cerr<(#x)<<"="<<x<<endl
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
#define pb push_back
#define sz(x) (int)(x).size()
typedef long long ll;

ll n, lim_a, x, y, q, que, lim_b, aux, tam, p, k;

int main()
{
    cin>>n;
    lim_a=0;
    string s;
    ffor(i, 0, n)
    {
        cin>>p>>k>>s;
    }
    lim_a=p;
    lim_b=((sz(s)*k)+p);
    cin>>q;
    ffor(i, 0, q)
    {

        cin>>que;
        if(que<lim_b && que>=lim_a)
        {
            aux=que-p;
            tam=(aux%(sz(s)));
            cout<<s[tam]<<endl;
            continue;
        }
        else
        {
            cout<<"a"<<endl;
            continue;
        }
    }
    return 0;
}
