#include <bits/stdc++.h>
using namespace std;
long long t, n, suma;
string s;
char a;
vector <long long> numeros;

long long verificador()
{
    for(int j=1; j<s.size(); j++)
    {
        if((s[j]-'0')!=(a-'0'))
        {
            numeros.push_back(0);
            return 0;
        }
    }
    numeros.push_back(1);
    return 0;
}

void func()
{
    for(int i=0; i<9; i++)
    {
        numeros.push_back(1);
    }
    numeros.push_back(0);
    for(int i=11; i<=1000000000; i++)
    {
        s=i;
        a=(s[0]);
        verificador();
    }

}

int main()
{
    func();
    cin>>t;
    while(t--)
    {
        suma=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            suma+=numeros[i];
        }
        cout<<suma<<endl;
    }
    return 0;
}
