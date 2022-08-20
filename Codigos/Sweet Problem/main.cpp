#include <bits/stdc++.h>
using namespace std;
long long t, a, suma, days;
vector <long long> candies;
int main()
{
    cin>>t;
    while(t--)
    {
        candies.clear();
        for(int i=0; i<3; i++)
        {
            cin>>a;
            candies.push_back(a);
        }
        sort(candies.begin(), candies.end());
        suma=(candies[2]-candies[1]-candies[0]);
        if(suma<0)
        {
            days=((candies[0]+candies[1]+candies[2])/2);
            cout<<days<<endl;
            continue;
        }
        days=((candies[0]+candies[1]+candies[2]-suma)/2);
        cout<<days<<endl;
    }
    return 0;
}
