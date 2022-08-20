#include <bits/stdc++.h>

using namespace std;
long double t, n, d, aux=0 ,b;


long long pruebas()
{
    if(n==d || n>d)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=1; i<=n; i++)
    {
        aux=0;
        b=d;
        aux+=(i+(b/(i+1)));
        aux=ceil(aux);
        if(aux<=n)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;

}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        pruebas();
    }
    return 0;
}
