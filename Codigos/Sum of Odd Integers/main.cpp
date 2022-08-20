#include <bits/stdc++.h>
using namespace std;
long long t, n, k, aux, j;

long long func()
{
    for(int i=0; i<k; i++)
    {
        aux+=j;
        if(aux>n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        j+=2;
    }
    if((n-aux)%2==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        j=1;
        aux=0;
        cin>>n>>k;
        if(n<k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n==1 && k==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(n==k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((n%2!=0) && (k%2==0))
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((n%2==0)  && (k%2!=0))
        {
            cout<<"NO"<<endl;
            continue;
        }
        func();

    }
    return 0;
}
