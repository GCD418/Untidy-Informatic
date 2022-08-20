#include <bits/stdc++.h>
using namespace std;
long long t, nn, b, nno;
double n, m, prom, aux, res;
bool estado;
int main()
{
    cin>>t;
    while(t--)
    {
        estado=false;
        prom=0;
        cin>>nn>>m;
        n=nn;
        double notes[nn];
        for(int i=0; i<nn; i++)
        {
            cin>>notes[i];
            prom+=notes[i];
        }
        nno=(prom*n);
        while(estado==false)
        {
            //cout<<"h"<<endl;
            if(nno<=m)
            {
                //cout<<"IF1"<<endl;
                aux=(prom*n-nno);
                b=aux+1;
                res=b-aux;
                if(res==1)
                {
                    //cout<<"if2"<<endl;
                    cout<<nno<<endl;
                    estado=true;
                }
            }
            nno--;
        }
    }
    return 0;
}
