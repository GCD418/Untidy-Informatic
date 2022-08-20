#include <bits/stdc++.h>

using namespace std;
long long n, l=0, r=0, posiciones=1;
string s;
int main()
{
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='L')
        {
            l--;
        }
        if(s[i]=='R')
        {
            r++;
        }
    }
    posiciones+=(r-l);
    cout<<posiciones<<endl;
    return 0;
}
