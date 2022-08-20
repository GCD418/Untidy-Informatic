#include <bits/stdc++.h>
using namespace std;
long n, m, k;
vector <long> houses1;
vector <long> houses2;
int main()
{
    houses1.push_back(195484);
    houses2.push_back(195484);
    cin>>n>>m>>k;
    m--;
    long casas[n];
    for(int i=0; i<n; i++)
    {
        cin>>casas[i];
    }
    for(int i=m; i<n; i++)
    {
        //cout<<"h"<<endl;
        if(casas[i]!=0 && casas[i]<=k)
        {
            cout<<"h"<<endl;
            houses1.push_back(i);
        }
    }
    if(m!=0)
    {
        for(int i=m; i>=0; i--)
        {
            if(casas[i]!=0 && casas[i]<=k)
            {
                houses2.push_back(i);
            }
        }
    }
    sort(houses1.begin(), houses1.begin());
    sort(houses2.begin(), houses2.begin());
    reverse(houses1.begin(), houses1.begin());
    reverse(houses2.begin(), houses2.begin());
    //cout<<houses1[0]<<endl;
    //cout<<houses1[1]<<endl;
    if((houses1[0])<(houses2[0]))
    {
        cout<<(houses1[0]*10)<<endl;
        return 0;
    }
    else
    {
        cout<<(houses2[0]*10)<<endl;
        return 0;
    }
    return 0;
}
