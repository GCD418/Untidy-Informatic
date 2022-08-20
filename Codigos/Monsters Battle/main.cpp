#include <bits/stdc++.h>
using namespace std;
long long t, n, m;
string schef, schefina;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long chef[n];
        long chefina[m];
        for(int i=0; i<n; i++)
        {
            cin>>chef[i];
        }
        cin>>schef;
        for(int i=0; i<m; i++)
        {
            cin>>chefina[i];
        }
        cin>>schefina;
    }
    return 0;
}
