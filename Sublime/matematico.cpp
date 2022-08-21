#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<#x<<"="<<x<<endl;
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
typedef long long ll;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef pair <int, int> pii;

const int INF= int(1e9+7);
ll k, n, x, multi=1, xx, r;
int main()
{
	cin>>k;
	ffor(i, 0, k)
	{
		cin>>n;
		multi*=n;
		multi=multi%INF;
		ffor(j, 0, n)
		{
			cin>>x;
		}
	}
	x=x%INF;
	xx=x;
	for(int i=0; i*i<k-1; i++)
	{
		xx*=xx;
		xx=xx%INF;
	}
	xx/=2;
	r=(xx*multi)%INF;
	cout<<r<<endl;
	
	return 0;
}