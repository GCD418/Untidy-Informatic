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
ll n, m, posibilidades=0;
int a[10000];
void func(ll escaleras)
{
	if(escaleras==0)
	{
		posibilidades++;
		return;
	}
	if(escaleras<0)
	{
		return;
	}
	ffor(i, 0, m)
	{
		func(escaleras-a[i]);
	}
}
int main()
{
	cin>>n>>m;
	ffor(i, 0, m)
	{
		cin>>a[i];
	}
	func(n);
	cout<<posibilidades<<endl;
    return 0;
}
