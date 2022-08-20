#include <bits/stdc++.h>
using namespace std;
int t, n, x, a, menor, maxim, aux, contador, aux2;
set <int> cont;
set <int> :: iterator it;
int func()
{
    for(int i=0; i<n; i++)
    {
        cin>>a;
        cont.insert(a);
    }
    menor=(*cont.begin());
    aux=1;
    //revisar si puede ser igual a 0
    while(x>0)
    {
        contador=cont.count(aux);
        if(contador==1)
        {
            aux++;
        }
        else
        {
            cont.insert(aux);
            aux++;
            x--;
        }
    }
    aux2=-1111;
    for(it=cont.begin(); it!=cont.end(); it++)
    {
        //cout<<*it<<endl;
        if(*it==(a+1))
        {
            maxim++;
        }
        a=*it;
    }
    cout<<maxim<<endl;
    return 0;
}

int main()
{
    cin>>t;
    while(t--)
    {
        maxim=1;
        cont.clear();
        cin>>n>>x;
        func();
    }
    return 0;
}
