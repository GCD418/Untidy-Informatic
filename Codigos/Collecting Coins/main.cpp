#include <bits/stdc++.h>
using namespace std;
long long t, a, b, c, n, x, y, sum, abj;


int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        x=abs(a-b);
        y=abs(a-c);
        sum=x+y;
        //cout<<sum<<endl;
        abj=((n%a)+(n%b)+(n%c));
        //cout<<abj<<endl;
        if(abj==sum)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(sum==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if((n%sum)==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
