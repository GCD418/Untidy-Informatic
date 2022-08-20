#include <bits/stdc++.h>
using namespace std;
long prueba=1, t, n, a , b, mayor;
string resultado;
map <long, long> mapa;
map <long, long> ::iterator it;
bool C, J;

long func()
{
    mayor=-22222;
    for(it=mapa.begin(); it!=mapa.end(); it++)
    {
        if(mayor<(it->second))
        {
            mayor=it->second;
        }
    }
    it=mapa.begin();
    for(int i=0; i<mayor; i++)
    {
        if(i=it->first)
        {
            if(C==false)
            {
                C=true;
                it->first=0;
            }
            else
            {
                if(J==false)
                {
                    j=true;
                    it->first=0;
                }
            }
        }
    }
}


int main()
{
    cin>>t;
    while(t--)
    {
        C=J=false;
        resultado="";
        cin>>n>>a>>b;
        mapa[a]=b;
        func();
    }
    return 0;
}
