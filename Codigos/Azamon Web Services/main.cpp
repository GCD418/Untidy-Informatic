#include <bits/stdc++.h>
using namespace std;
long long t, pos, reespaldo, numero_final;
string s, c;
char menor_s, aux;
long long convers()
{
    for(int i=0; i<s.size(); i++)
    {
        if(menor_s<s[i])
        {
            aux=s[i];
            s[i]=s[pos];
            s[pos]=aux;
            numero_final=i;
            return 0;
        }
    }
}
long long func()
{
    cin>>s>>c;
    if(s<c)
    {
        cout<<s<<endl;
        return 0;
    }
    menor_s=s[1];
    pos=1;
    for(int i=2; i<s.size(); i++)
    {
        if(menor_s>s[i])
        {
            menor_s=s[i];
            pos=i;
            reespaldo=pos;
        }
        if(menor_s==s[i])
        {
            pos=i;
        }
    }
    convers();
    //cout<<s<<endl;
    if(s<c)
    {
        cout<<s<<endl;
        return 0;
    }
    if(s==c)
    {
        aux=s[numero_final];
        s[numero_final]=s[pos];
        s[pos]=aux;
        pos=reespaldo;
        convers();
        if(s<c)
        {
            cout<<s<<endl;
            return 0;
        }
    }

    cout<<"---"<<endl;
    return 0;

}

int main()
{
    cin>>t;
    while(t--)
    {
        func();
    }
    return 0;
}
