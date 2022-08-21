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
ll n, k, x, mochila_miguel, costo_promo=0, divisor_comun, porcentaje_mochila, costo_total=0, a_pagar;
vll v; // Se Supone que este código debería funcionar para la subtask 2 de 14 puntos pero dio a la
		//subtask 3 de 30 así que, creo que no tengo quejas
int main()
{
	cin>>n>>k;
	ffor(i, 0, n)
	{
		cin>>x;
		costo_total+=x;
		v.push_back(x);
	}
	mochila_miguel=v.front();
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	ffor(i, 0, k)
	{
		costo_promo+=v[i];
	}
	if(mochila_miguel<v.front())
	{
		cout<<"JKJKJKJKJ"<<endl;
		porcentaje_mochila=(mochila_miguel*100)/costo_total;
		a_pagar=(porcentaje_mochila*costo_promo)/100;
		cout<<abs(mochila_miguel-a_pagar)<<" 1"<<endl;
	}
	else
	{
		cout<<"KKKKKKKKKKKKK"<<endl;
		cout<<abs(mochila_miguel-costo_promo/n)<<" 1"<<endl;
	}
	return 0;
}