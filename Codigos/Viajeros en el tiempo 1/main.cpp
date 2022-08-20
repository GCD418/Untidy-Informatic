#include <bits/stdc++.h>
using namespace std;
string jonas, family;
long long n, k, mayor, x, jidentificador, parents;

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
        parents=0;
        cin>>jonas>>k;
        jidentificador=may(jonas);
        //cout<<jonas<<endl;
        for(int i=0; i<k; i++)
        {
            cin>>family;
            mayor=may(family);
            if(mayor==jidentificador)
            {
                parents++;
            }
            //cout<<family<<endl;
        }
        cout<<parents<<endl;

    }
    return 0;
}
