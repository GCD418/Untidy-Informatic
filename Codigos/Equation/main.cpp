#include <bits/stdc++.h>

using namespace std;
long long n, a, b;
bool esPrimo(long long x)
{
    for(int j=2; (j*j)<=x; j++)
    {
        if((x%j)==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin>>n;
    long long MAX=15*n;
    for(int i=4; i<MAX; i++)
    {
        a=i;
        if(esPrimo(a)==false)
        {
            b=a+n;
            if(esPrimo(b)==false)
            {
                cout<<b<<" "<<a<<endl;
                return 0;
            }
        }

    }

    return 0;
}
