#include <bits/stdc++.h>
using namespace std;
long t, n, mayor, aux, aux2, ocup_c, ocup_j, prueba=1;
vector <long> vec;
string resultado;
int main()
{
    cin>>t;
    while(t--)
    {
        ocup_c=ocup_j=0;
        resultado="";
        cin>>n;
        long numeros[n];
        long numeros2[n];
        for(int i=0; i<n; i++)
        {
            cin>>numeros[i]>>numeros2[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(numeros[i]>numeros[j])
                {
                    aux=numeros[i];
                    numeros[i]=numeros[j];
                    numeros[j]=aux;
                    aux2=numeros2[i];
                    numeros2[i]=numeros2[j];
                    numeros2[j]=aux2;
                }
            }
        }
        //cout<<"h"<<endl;
        //mayor=numeros[0][0];
        /*for(int i=0; i<n; i++)
        {
            cout<<"jj"<<endl;
            for(int j=1; j<n; j++)
            {
                cout<<"kk"<<endl;
                if(numeros[i][0]>numeros[j][0])
                {
                    cout<<"H"<<endl;
                    aux1=numeros[i][0];
                    numeros[i][0]=numeros[j][0];
                    numeros[j][0]=aux1;
                    aux2=numeros[i][1];
                    numeros[i][1]=numeros[j][1];
                    numeros[j][j]=aux2;
                }
            }
        }*/
        sort(numeros, numeros+n);
        for(int i=0; i<n; i++)
        {
            vec.push_back(numeros[i]-numeros[i]);
        }
        for(int i=0; i<vec.size(); i++)
        {
            if(ocup_c>vec[i] && ocup_j>vec[i])
            {
                cout<<"Case #"<<prueba<<": "<<"IMPOSSIBLE"<<endl;
                prueba++;
                break;
            }
            if(ocup_c<=vec[i])
            {
                resultado+='C';
                ocup_c=vec[i];
            }
            else
            {
                if(ocup_j<=vec[i])
                {
                    resultado+='J';
                    ocup_j=vec[i];
                }
            }
        }
        if(resultado.size()==n)
        {
            cout<<"Case #"<<prueba<<": "<<resultado<<endl;
            prueba++;
        }
    }
    return 0;
}
