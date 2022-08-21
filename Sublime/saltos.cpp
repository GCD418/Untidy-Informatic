#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<#x<<"="<<x<<endl;
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
const int INF= int(1e9+7);

ll n, dmin, dmax;
int main()
{
	cin>>n>>dmin>>dmax;
	if(dmin == dmax)
	{
		if(n%dmin == 0)
		{
			cout<<"1"<<endl;
			return 0;
		}
		cout<<"0"<<endl;
		return 0;
	}
	cout<<n+1<<endl;

	return 0;
}