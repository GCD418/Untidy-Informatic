#include <bits/stdc++.h>
using namespace std;
long long t, a, b, c, aux;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        aux=(abs(a-b)+abs(a-c)+abs(b-c));
        aux-=4;
        if(aux<0)
        {
            puts("0";
        }
        else
        {
            cout<<aux<<endl;
        }
    }
    return 0;
}
