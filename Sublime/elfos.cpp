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
int elfos_vivos=0, a, b, c, d;
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
		cout<<"AAaaaaaaa"<<endl;
		if((b % 2 == 0 || b ==1) && (c%2 == 0 || c ==1) && (d % 2 == 0 || d ==1))
		{
			//cout<<"JGJHGH"<<endl;
			elfos_vivos++;
		}
	}
	
	if((b) % 2 == 0)
	{
		cout<<"BBBBBBBBBB"<<endl;
		if((a %2 == 0 || a ==1) && (c%2 == 0 || c ==1) && (d % 2 == 0 || d ==1))
		{
			elfos_vivos++;
		}
	}
	if((c) % 2 == 0)
	{
		if((b %2 == 0 || b ==1) && (a%2 == 0 || a ==1) && (d % 2 == 0 || d ==1))
		{
			elfos_vivos++;
		}
	}
	if((d) % 2 == 0)
	{
		if((b %2 == 0 || b ==1) && (c%2 == 0 || c ==1) && (a % 2 == 0 || a ==1))
		{
			elfos_vivos++;
		}
	}

	//Cuando son impares
	if((a) % 2 == 1)
	{
		if((b %2 == 1 || b ==1) && (c%2 == 1 || c ==1) && (d % 2 == 1 || d ==1))
		{
			elfos_vivos++;
		}
	}
	if((b) % 2 == 1)
	{
		if((a %2 == 1 || a ==1) && (c%2 == 1 || c ==1) && (d % 2 == 1 || d ==1))
		{
			elfos_vivos++;
		}
	}
	if((c) % 2 == 1)
	{
		if((b %2 == 1 || b ==1) && (a%2 == 1 || a ==1) && (d % 2 == 1 || d ==1))
		{
			elfos_vivos++;
		}
	}
	if((d) % 2 == 1)
	{
		if((b %2 == 1 || b ==1) && (c%2 == 1 || c ==1) && (a % 2 == 1 || a ==1))
		{
			elfos_vivos++;
		}
	}
	//cout<<a.back()<<endl;
	cout<<elfos_vivos<<endl;


	return 0;
}