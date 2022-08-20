#include <bits/stdc++.h>
using namespace std;
long long b, numerits[6], product=1, num=1;
int main()
{
    cin>>b>>numerits[0]>>numerits[1]>>numerits[2]>>numerits[3]>>numerits[4]>>numerits[5];
    for(int i=0; i<6; i++)
    {
        product*=numerits[i];
        //product=product;
        product=product%10;
    }
    cout<<product<<endl;
    if(product==0)
    {
        cout<<"1"<<endl;
        return 0;
    }
    for(int i=0; i<product; i++)
    {
        num*=b;
        num=num%10;
    }
    cout<<num<<endl;
    return 0;
}
