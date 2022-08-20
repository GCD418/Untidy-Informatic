#include <bits/stdc++.h>
using namespace std;
long long t, n, a, x, m, j;;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n;
        long long ar[n], resultado[n];
        for(long long i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar, ar+n);
        j=0;
        for(long long i=0; i<n/2; i++)
        {
            x=ar[m-1];
            m--;
            resultado[j]=x;
            j++;
            resultado[j]=(ar[i]);

        }
        //reverse(resultado.begin(), resultado.end());
        for(long long i=0; i<n; i++)
        {
            cout<<resultado[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
