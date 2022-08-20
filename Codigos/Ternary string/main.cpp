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

ll t, r, lo, mi, hi;
string s;
set <ll> aux;
ll func()
{
    aux.insert(s[0]);
    aux.insert(s[1]);
    aux.insert(s[2]);
    ffor(i, 0, sz(s)-3)
    {
        lo=i;
        hi=sz(s);
        mi=(lo+hi)/2;
        while(lo<=hi)
        {
            ffor(j, i+3, mi)
            {
                aux.insert(s[j]);
            }
            if(aux.count(1)==1 && aux.count(2)==1 && aux.count(3)==1)
            {
                r=mi;
                hi=mi-1;
            }
            else
            {
                lo=mi+1;
            }
            mi=(lo+hi)/2;
        }
    }
    cout<<r<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        func();
    }
    return 0;
}
