#include <bits/stdc++.h>
using namespace std;
long long t, n, aux, aux2, a;
vector <long long> ar;
vector <long long> resultado;
int main()
{
    cin>>t;
    while(t--)
    {
        ar.clear();
        resultado.clear();
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            ar.push_back(a);
        }
        sort(ar.begin(), ar.end());
        for(int i=0; i<ar.size(); i++)
        {
            resultado.push_back(ar[i]);
            a=ar.back();
            ar.pop_back();
            resultado.push_back(a);
        }
        reverse(resultado.begin(), resultado.end());
        for(int i=0; i<n; i++)
        {
            cout<<resultado[i]<<" ";
        }
        cout<<endl;
        result
    }
    return 0;
}
