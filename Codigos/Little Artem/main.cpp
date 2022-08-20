#include <bits/stdc++.h>
using namespace std;
int t, n, m, b, w;
string s;
char letra;

int cambio()
{
    if(letra=='W')
    {
        letra='B';
    }
    else
    {
        letra='W';
    }
}

int func()
{
    s="";
    letra='B';
    b=w=0;
    if(n%2==0 || m%2==0)
    {
        s="";
        for(int i=0; i<n; i++)
        {
            s="";
            for(int j=0; j<m; j++)
            {
                //cout<<"h"<<endl;
                if(i==(n-1) && j==(m-1))
                {
                   s+='B';
                   cambio();
                   continue;
                }
                s+=letra;
                cambio();
            }
            cout<<s<<endl;
        }
        return 0;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            s="";
            for(int j=0; j<m; j++)
            {
                /*if((i==(n-1)) && (b==w))
                {
                    letra='B';
                    s+=letra;
                    continue;
                }*/
                if(i%2==0)
                {
                    s+=letra;
                    if(letra=='B')
                    {
                        b++;
                    }
                    else
                    {
                        w++;
                    }
                    cambio();
                }
                else
                {
                    //cambio();
                    s+=letra;
                    if(letra=='B')
                    {
                        b++;
                    }
                    else
                    {
                        w++;
                    }
                    cambio();
                    continue;
                }
                //ambio();
            }
            cout<<s<<endl;
        }
    }
    //cout<<s<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        func();
    }
    return 0;
}
