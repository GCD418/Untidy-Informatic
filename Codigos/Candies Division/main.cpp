#include <bits/stdc++.h>
using namespace std;
long long t, n, k, cociente, resto, mitad, aux;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cociente=(n/k);
        if(n%k==0)
        {
            cout<<n<<endl;
            continue;
        }
        resto=(n-(cociente*k));
        mitad=floor(k/2);
        aux=resto-mitad;
        cout<<n-aux<<endl;
    }
    return 0;
}
