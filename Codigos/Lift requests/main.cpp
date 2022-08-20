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

ll t, n, q, pisos;
int main()
{

    cin>>t;
    while(t--)
    {
        pisos=0;
        cin>>n>>q;
        ll requests[2*q];
        ffor(i, 0, q*2)
        {
            cin>>requests[i];
        }
        pisos+=(requests[0]);
        ffor(i, 0, ((q*2)-1))
        {
            pisos+=abs(requests[i]-requests[i+1]);
        }
        cout<<pisos<<endl;
    }
    return 0;
}
