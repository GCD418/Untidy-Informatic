#include <bits/stdc++.h>
using namespace std;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
#define pb 				   push_back
#define mp                 make_pair
#define dbg(x) cerr<<(#x)<< "=" << (x) << endl
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI 				   3.14159265358979323846264338327950
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define endl 			   '\n'
#define sz(x)              ((int)(x).size())
typedef long long          ll;
typedef pair < int, int >  pii;
typedef deque < ll> dll;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi > 	   gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);

struct sort_vii_S {
    bool operator()(/*const */pair<int,int> &left,/* const */pair<int,int> &right) {
        return left.second < right.second;
    }
};

ll n, a, b;
vii x;
vi y;

int main()
{	
	cin>>n;
	ffor(i, 0, n)
	{
		cin>>a;
		x.pb(mp(a, i));
	}
	ffor(i, 0, n)
	{
		cin>>a;
		y.pb(a);
	}
	sort(all(x));
	reverse(all(x));
	sort(all(y));
	reverse(all(y));
	ffor(i, 0, n)
	{
		x[i].F=y[i];
	}
	sort(x.begin(), x.end(), sort_vii_S());
	ffor(i, 0, n)
	{
		cout<<x[i].F<<" ";
	}
	cout<<endl;
    return 0;
}
