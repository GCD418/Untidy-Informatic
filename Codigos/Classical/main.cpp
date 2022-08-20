#include <bits/stdc++.h>

using namespace std;
long long n, may;
vector <long long> divisores;
int MCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return MCD(b, a%b);
}
int mcm(int a, int b)
{
    return a*(b/MCD(a, b));
}


int main()
{
    cin>>n;
    long long numbers[n];
    for(int i=0; i<n; i++)
    {
        cin>>numbers[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            divisores.push_back(mcm(numbers[i], numbers[j]));
        }
    }
    may=divisores[0];
    for(int i=1; i<divisores.size(); i++)
    {
        if(may<divisores[i])
        {
            may=divisores[i];
        }
    }
    cout<<may<<endl;
    return 0;
}
