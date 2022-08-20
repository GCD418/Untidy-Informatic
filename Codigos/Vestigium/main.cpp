#include <bits/stdc++.h>
using namespace std;
int t, n, prueba=1, medio, filas, columnas, i, j, k, y, bool_filas, bool_columnas;

int func()
{
    medio=filas=columnas=0;
    int matrix[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        medio+=matrix[i][i];
    }

    //r_filas(matrix);

    for(i=0, bool_filas; i<n; i++)
    {
        bool_filas=0;
        for(j=0, bool_filas; j<n && bool_filas==0; j++)
        {
            //cout<<"H"<<endl;
            for(k=j+1, bool_filas; k<n && bool_filas==0; k++)
            {
                if(matrix[i][j]==matrix[i][k])
                {
                    filas++;
                    bool_filas=1;
                }
            }
            //cout<<"h"<<endl;
        }
        //cout<<"Hh"<<endl;
    }

    //r_columnas(matrix);

    for(i=0, bool_columnas=0; i<n; i++)
    {
        bool_columnas=0;
        for(j=0, bool_columnas; j<n && bool_columnas==0; j++)
        {
            for(k=j+1, bool_columnas; k<n && bool_columnas==0; k++)
            {
                if(matrix[j][i]==matrix[k][i])
                {
                    columnas++;
                    bool_columnas=1;
                }
            }
        }
    }

    cout<<"Case #"<<prueba<<": "<<medio<<" "<<filas<<" "<<columnas<<endl;
    prueba++;
    return 0;

}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        func();
    }
    return 0;
}
