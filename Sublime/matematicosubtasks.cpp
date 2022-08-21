#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<#x<<"="<<x<<endl;
#define endl '\n'
#define ffor(i, o, n) for(int i=o; i<n; i++)
#define sz(x) ((x).size())
typedef long long ll;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef pair <int, int> pii;

const int INF= int(1e9+7);
ll k, n, x, suma=0, multi;
vll v;
vector < vector < ll > > vector_grande;
int main()
{

	cin>>k;
	ffor(i, 0, k)
	{
		v.clear();
		cin>>n;
		ffor(j, 0, n)
		{
			cin>>x;
			x=(x%INF);
			//dbg(x);
			v.push_back(x);
		}
		vector_grande.push_back(v);
	}
	sort(vector_grande.begin(), vector_grande.end());
	ffor(i, 0, k) //Mostrar todo el vector pa' ver que tal
	{
		ffor(j, 0, sz(vector_grande[i]))
		{
			cout<<vector_grande[i][j]<<" "; //j=columnas, i=filas
		}
		cout<<endl;
	}
	
	return 0;
}