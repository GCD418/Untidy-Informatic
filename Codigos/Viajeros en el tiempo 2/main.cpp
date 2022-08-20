#include <bits/stdc++.h>
using namespace std;
long long n, k, mayor, x, jidentificador, parents, numero;
map <long long, long long> family;
map <long long, long long> ::iterator it;
string fam;

long long may(string s)
{
    x=(s[0]-'0');
    for(int i=0; i<s.size(); i++)
    {
        if((s[i]-'0')>x)
        {
            x=(s[i]-'0');
        }
    }
    return x;
}
int main()
{
    cin>>n;
    while(n--)
    {
        mayor=0;
        numero=0;
        family.clear();
        cin>>k;
        for(int i=0; i<k; i++)
        {
            cin>>fam;
            family[may(fam)]+=1;
        }
        for(it=family.begin(); it!=family.end(); it++)
        {
            if((it -> second)>numero)
            {
                mayor= it -> first;
                numero= it -> second;
            }
        }
        cout<<mayor<<endl;
    }
    return 0;
}
