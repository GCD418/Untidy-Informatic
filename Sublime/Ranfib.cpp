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
const ll INF = ll(1e9 + 7);
ll n, a=1, b=1, c;
char x;
void func()
{
	if(x=='+')
	{
		c=a;
		c=c%INF;
		a=b+a;
		a=a%INF;
		b=c;
		b=b%INF;
		//dbg(c);

	}
	else
	{
		c=a;
		c=c%INF;
		a=b-a;
		a=a%INF;
		b=c;
		b=b%INF;
		//dbg(c);
	}
	//dbg(a);
}
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>x;
		func();
	}
	//func();
	cout<<((a%INF)+INF)%INF<<endl;
    return 0;
}
