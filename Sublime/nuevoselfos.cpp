#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<#x<<"="<<x<<endl;
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
const int INF= int(1e9+7);
#define ultimito(x) x.back()-'0'
string s[4];
int elfos_vivos=0, a, b, c, d, aux;
int main()
{
	ffor(i, 0, 4)
	{
		cin >> s[i];
	}
	//cout<<a+5<<endl;
	//Cuando son PARES
	a=ultimito(s[0]);
	b=ultimito(s[1]);
	c=ultimito(s[2]);
	d=ultimito(s[3]);
	//cout<<a%2<<endl;
	if((a) % 2 == 0)
	{
		aux=b*c*d;
		if(aux%2==0)
		{
			elfos_vivos++;
		}
	}
	
	if((b) % 2 == 0)
	{
		aux=a*c*d;
		if(aux%2==0)
		{
			elfos_vivos++;
		}
	}
	if((c) % 2 == 0)
	{
		aux=b*a*d;
		if(aux%2==0)
		{
			elfos_vivos++;
		}
	}
	if((d) % 2 == 0)
	{
		aux=b*c*a;
		if(aux%2==0)
		{
			elfos_vivos++;
		}
	}

	//Cuando son impares
	if((a) % 2 == 1)
	{
		aux=b*c*d;
		if(aux%2==1)
		{
			elfos_vivos++;
		}
	}
	if((b) % 2 == 1)
	{
		aux=a*c*d;
		if(aux%2==1)
		{
			elfos_vivos++;
		}
		
	}
	if((c) % 2 == 1)
	{
		aux=b*a*d;
		if(aux%2==1)
		{
			elfos_vivos++;
		}
	}
	if((d) % 2 == 1)
	{
		aux=b*c*a;
		if(aux%2==1)
		{
			elfos_vivos++;
		}
	}
	//cout<<a.back()<<endl;
	cout<<elfos_vivos<<endl;


	return 0;
}