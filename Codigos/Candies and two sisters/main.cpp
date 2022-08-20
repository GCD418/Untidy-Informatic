#include <bits/stdc++.h>
using namespace std;
long long t, n, aux;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            aux=n/2;
            aux--;
            cout<<aux<<endl;
            continue;
        }
        aux=n/2;
        cout<<aux<<endl;
    }
    return 0;
}
