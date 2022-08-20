#include <bits/stdc++.h>
using namespace std;

long long t, n, tam;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        tam=n;
        long long ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar, ar+n);
        for(int i=0; i<n-1; i++)
        {
            //cout<<ar[i]<<"  ";
            if(ar[i]==ar[i+1])
            {
                tam--;
            }
        }
        cout<<tam<<endl;
    }
    return 0;
}
