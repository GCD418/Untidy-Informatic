#include <bits/stdc++.h>
using namespace std;
int t, n, pos, sum, aux;

/*int func(int x[])
{
    aux=1;
    for(int i=0; i<n; i++)
    {
        aux++;
        for(int j=i; i<)
    }
}
*/
int main()
{
    cin>>t;
    while(t--)
    {
        pos=0;
        sum=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if((a[i]%2)==0)
            {
                pos=i;
                pos++;
            }
        }
        if(pos>0)
        {
            cout<<"1"<<endl;
            cout<<pos<<endl;
            continue;
        }
        if((sum%2)!=0 && n<=2)
        {
            cout<<"-1"<<endl;
            continue;
        }
        //func(a);
        cout<<"2"<<endl;
        cout<<"1 2"<<endl;
    }
    return 0;
}
