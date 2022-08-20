#include <bits/stdc++.h>
using namespace std;
long long t, n, a, x;
vector <long long> ar;
vector <long long> resultado;
int main()
{
    cin>>t;
    while(t--)
    {
        ar.clear();
        cin>>n;
        for(long long i=0; i<n; i++)
        {
            cin>>a;
            ar.push_back(a);
        }
        sort(ar.begin(), ar.end());
        /*for(long long i=0; i<ar.size(); i++)
        {
            resultado.push_back(ar[i]);
            x=ar.back();
            ar.pop_back();
            resultado.push_back(x);
        }
        reverse(resultado.begin(), resultado.end());*/
        resultado.clear();
        for(long long i=0; i<ar.size(); i++)
        {
            x=ar.back();
            ar.pop_back();
            resultado.push_back(x);
            resultado.push_back(ar[i]);

        }
        reverse(resultado.begin(), resultado.end());
        for(long long i=0; i<resultado.size(); i++)
        {
            cout<<resultado[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
