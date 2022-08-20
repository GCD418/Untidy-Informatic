#include <bits/stdc++.h>
using namespace std;
long n, t, k, d, x;
int main()
{
    cin>>n>>t>>k>>d;
    x=(n/k*t-d-t);
    if(x>0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
