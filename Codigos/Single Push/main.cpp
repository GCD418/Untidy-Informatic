#include <bits/stdc++.h>
using namespace std;
long long t, n, suma_a, suma_b, aux, emergency;


long long func(long long x[], long long y[])
{
    if(suma_a>suma_b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        aux=(y[i]-x[i]);
        if(aux==0)
        {
            continue;
        }
        for(int j=i; j<n; j++)
        {
            //cout<<aux<<endl;
            emergency=(y[j]-x[j]);
            if(aux==emergency)
            {
                continue;
            }
            if(emergency==0)
            {
                aux=0;
                continue;
            }
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        suma_a=suma_b=0;
        cin>>n;
        long long a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            suma_a+=a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            suma_b+=b[i];
        }
        func(a, b);
    }
    return 0;
}
