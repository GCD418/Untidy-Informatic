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

ll t, n, a, p, m, rr, x;
string s;
ll func()
{
    a=p=m=x=0;
    s+="   ";
    ffor(i, 0, n)
    {
        if(s[i]=='(')
        {
            a++;
            continue;
        }
        if(a>0)
        {
            rr=a;
            x=0;
            ffor(j, i, rr+i)
            {
                if(s[j]==')')
                {
                    p++;
                    a--;
                    x++;
                }
                else
                {
                    break;
                }
                if(j==(rr+i-1))
                {
                    break;
                }
            }
            i+=(x-1);
            m+=a;
        }
    }
    //cout<<"P="<<p<<endl;
    p*=2;
    n-=p;
    cout<<n/2<<endl;
    return 0;

}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        func();
    }
    return 0;
}
