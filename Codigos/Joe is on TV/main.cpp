#include <bits/stdc++.h>
using namespace std;
long double n, mon=0;
int main()
{
    cin>>n;
    while(n!=0)
    {
        mon+=(1/n);
        n--;
    }
    cout<<mon<<endl;
    return 0;
}
