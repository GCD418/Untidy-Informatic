#include <bits/stdc++.h>
using namespace std;
long long n, aux, suma=0, warning;
int main()
{
    cin>>n;
    long cards[n];
    for(int i=0; i<n; i++)
    {
        cin>>cards[i];
    }
    sort(cards, cards+n);
    warning=(cards[n-1]);
    aux=2;
    for(int i=0; i<n; i+=(aux-1))
    {
        cards[i]+=(suma/aux);
        aux=(cards[i]+1);
        for(int j=0; j<aux; j++)
        {
            suma+=cards[j];
            cards[j]=0;
        }
    }
    if(warning>cards[n-1])
    {
        cout<<warning<<endl;
        return 0;
    }
    cout<<cards[n-1]<<endl;
    return 0;
}
