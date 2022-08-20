#include <bits/stdc++.h>
using namespace std;
long long t, n, aux;
string mat[9];
int main()
{
    cin>>t;
    while(t--)
    {
        for(int i=0; i<9; i++)
        {
            cin>>mat[i];

        }
        for(int i=0; i<9; i+=3)
        {
            for(int j=0; j<9; j+=3)
            {
                if((mat[i][j]-'0')==9)
                {
                    aux=mat[i][j]-'0';
                    aux--;
                    mat[i][j]=char(aux+48);
                }
                else
                {
                    aux=mat[i][j]-'0';
                    aux++;
                    mat[i][j]=char(aux+48);
                }
            }
        }
        cout<<endl;
        cout<<endl;
        for(int i=0; i<9; i++)
        {
            cout<<mat[i]<<endl;
        }
    }
    return 0;
}
