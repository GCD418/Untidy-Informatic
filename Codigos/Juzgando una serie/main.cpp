#include <bits/stdc++.h>
using namespace std;
long long n, k, aux=0;

int main()
{
    cin>>n>>k;
    long long fibo[k+2];
    fibo[0]=1;
    fibo[1]=1;
    aux+=fibo[0];
    aux+=fibo[1];
    for(int i=2; i<k-1; i++)
    {
        fibo[i]=(fibo[i-1]+fibo[i-2]);
        aux+=fibo[i];
    }
    cout<<fibo[k-2]<<endl;
    cout<<aux<<endl;
    if((8+aux)==n)
    {
        cout<<"AC"<<endl;
    }
    else
    {
        cout<<"WA"<<endl;
    }
    return 0;
}
