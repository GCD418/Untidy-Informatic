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

ll isprime(long long int a)
{
    if(a==1)
    {
        return 1;
    }
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return i;
        }
    }
    return a;
}
ll t, n, k, x;

ll func()
{
    if(n%2==0)
    {
        n+=2;
    }
    else
    {
        x=isprime(n);
        n+=x;
    }
    k--;
    n+=(2*k);
    cout<<n<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        func();
    }
    return 0;
}
