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
ll f1, f2, q, veces, aux=0, x, diferencia, par=0;
bool pares=false;
void init()
{
	if(f1%2==0 && f2%2==0)
	{
		pares=true;
	}
	else
	{
		if(f1%2==1 && f2%2==1)
		{
			diferencia=1;//siempre sumar diferencia no restarla
		}
		else
		{
			if(f1%2==0)
			{
				diferencia=0;
			}
			else
			{
				diferencia=2;
			}
		}
	}
}
inline void func()
{
	if(pares==true)
	{
		cout<<"PAR"<<endl;
		return;
	}
	else
	{
		x+=diferencia;
		if(x%3==0)
		{
			cout<<"PAR"<<endl;
			par++;
		}
		else
		{
			cout<<"IMPAR"<<endl;
		}
	}
	return;
}
int main()
{
	cin>>f1>>f2>>q;
	init();
	veces=q;
	while(q--)
	{
		cin>>x;
		x--;
		func();
	}
	if(pares==true)
	{
		cout<<"CONJETURA"<<endl;
		return 0;
	}
	if(veces==par)
	{
		cout<<"CONJETURA"<<endl;
		return 0;
	}
	cout<<"CONTRADICCION"<<endl;

    return 0;
}
