#include <bits/stdc++.h>
using namespace std;
long t, n, sum, product, steps, zeros;
int main()
{
    cin>>t;
    while(t--)
    {
        steps=0;
        sum=0;
        product=1;
        zeros=0;
        cin>>n;
        long numbers[n];
        for(int i=0; i<n; i++)
        {
            cin>>numbers[i];
            sum+=numbers[i];
            if(numbers[i]==0)
            {
                zeros++;
            }
            product*=numbers[i];
        }
        if(sum!=0 && product!=0)
        {
            cout<<steps<<endl;
            continue;
        }
        if(product!=0 && sum==0)
        {
            steps++;
            cout<<steps<<endl;
            continue;
        }
        if(sum!=0 && product==0)
        {
            steps+=zeros;
            sum+=zeros;
            if(sum!=0)
            {
                cout<<steps<<endl;
                continue;
            }
            steps++;
            cout<<steps<<endl;
            continue;
        }
        if(sum==0 && product==0)
        {
            steps=zeros;
            cout<<steps<<endl;
            continue;
        }

    }
    return 0;
}
