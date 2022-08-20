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
ll t, n, suma, pos ,neg;
bool positive=false;
bool negative=false;
ll func(ll a[])
{
    if(pos==n || neg==n)
    {
        sort(a, a+n);
        cout<<a[n-1]<<endl;
        return 0;
    }
    suma=0;
    positive=negative=false;
    ffor(i, 0, n)
    {
        if((neg>pos || pos>neg) && i==0)
        {
            if(a[i]<0 && a[i+1]<0 && a[i+1]>a[i])
            {
                continue;
            }
            if(a[i]>0 && a[i+1]>0 && a[i+1]>a[i])
            {
                continue;
            }
            suma+=a[i];
            if(a[i]<0)
            {
                negative=1;
            }
            else
            {
                positive=1;
            }
            continue;
        }
        if(a[i+1]>a[i] && (positive==0 && negative==0) && pos!=neg)
        {
            continue;
        }
        if(a[i]<0 && negative==0)
        {
            if(i==(n-1))
            {
                suma+=a[i];
                negative=1;
                positive=0;
                continue;
            }
            if(a[i+1]<0 && a[i+1]>a[i])
            {
                continue;
            }
            else
            {
                suma+=a[i];
                //cout<<a[i]<<endl;
                negative=1;
                positive=0;
            }
        }
        if(a[i]>0 && positive==0)
        {
            if(i==(n-1))
            {
                suma+=a[i];
                //cout<<a[i]<<endl;
                negative=0;
                positive=1;
                continue;
            }
            if(a[i+1]>0 && a[i+1]>a[i])
            {
                continue;
            }
            else
            {
                suma+=a[i];
                //cout<<a[i]<<endl;
                negative=0;
                positive=1;
            }
        }
    }
    //cout<<"------------------"<<endl;
    cout<<suma<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        pos=neg=0;
        cin>>n;
        ll x[n];
        ffor(i, 0, n)
        {
            cin>>x[i];
            if(x[i]<0)
            {
                neg++;
            }
            else
            {
                pos++;
            }
        }
        func(x);
    }
    return 0;
}
