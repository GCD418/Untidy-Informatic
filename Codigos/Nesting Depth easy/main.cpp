#include <bits/stdc++.h>
using namespace std;
int t, prueba=1, a, abierto, x_cerrar, n, x_abrir;
string s, resultado;
char abrir='(', cerrar=')';

int func()
{
    for(int i=0; i<n; i++)
    {
        a=(s[i]-'0');
        x_cerrar=abs(abierto-a);
        x_abrir=abs(abierto-a);
        if(a<abierto)
        {
            for(int j=0; j<x_cerrar; j++)
            {
                resultado+=cerrar;
                abierto--;
            }
            resultado+=s[i];
        }
        else
        {
            for(int j=0; j<x_abrir; j++)
            {
                resultado+=abrir;
                abierto++;
            }
            resultado+=s[i];
        }
        //<<resultado<<endl;
    }
    while(abierto>0)
    {
        resultado+=cerrar;
        abierto--;
    }
    cout<<"Case #"<<prueba<<": "<<resultado<<endl;
    prueba++;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        abierto=0;
        resultado="";
        cin>>s;
        n=s.size();
        s+="  ";
        func();
    }
    return 0;
}
