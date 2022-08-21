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
ll n, k, x, mochila_miguel, costo_promo=0, divisor_comun, costo_total=0, comun, ahorro, pago;
pair < ll, ll> porcentaje_mochila;
pair < ll, ll> a_pagar;
vll v; 
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
		//cout<<"JKJKJKJKJ"<<endl;
		porcentaje_mochila=make_pair((mochila_miguel*100), costo_total);
		a_pagar=make_pair((porcentaje_mochila.first*costo_promo), porcentaje_mochila.second*100);
		mochila_miguel*=a_pagar.second;
		ahorro=abs(a_pagar.first - mochila_miguel);
		comun=__gcd(ahorro, a_pagar.second);
		cout<<ahorro/comun<<" "<<a_pagar.second/comun<<endl;
	}
	else
	{
		//cout<<"KKKKKKKKKKKKK"<<endl;
		mochila_miguel*=n;
		pago=abs(mochila_miguel-costo_promo);
		divisor_comun=__gcd(pago, n);
		cout<<pago/divisor_comun<<" "<<n/divisor_comun<<endl;
	}
	return 0;
}