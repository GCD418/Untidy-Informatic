#include <bits/stdc++.h>

using namespace std;
long long t, sum, n, par, impar;
int main()
{
    cin>>t;
    while(t--)
    {
        sum=par=impar=0;
        cin>>n;
        long num[n];
        for(int i=0; i<n; i++)
        {
            cin>>num[n];
            sum+=num[n];
            if(num[n]%2==0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
        if((sum)%2!=0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(par!=0 && impar!=0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;

    }
    return 0;
}
