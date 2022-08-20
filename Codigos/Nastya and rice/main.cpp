#include <bits/stdc++.h>
using namespace std;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
#define pb 				   push_back
#define mp                 make_pair
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI 				   3.14159265358979323846264338327950
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl 			   '\n'
#define sz(x)              ((int)(x).size())
typedef long long          ll;
typedef pair < int, int >  pii;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi > 	   gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;

ll t, n, a, b, c, d, rice_min, rice_max, bolsa_min, bolsa_max, peso_max, peso_min;

ll func()
{
    rice_min=a-b;
    rice_max=a+b;
    bolsa_min=c-d;
    bolsa_max=d+c;
    peso_max=n*rice_max;
    peso_min=n*rice_min;
    if((peso_max<bolsa_min) || (peso_min>bolsa_max))
    {
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    return 0;

}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        func();
    }
    return 0;
}
