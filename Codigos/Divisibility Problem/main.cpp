#include <bits/stdc++.h>
using namespace std;
long long t, a, b, mov, aux, num;

long long func()
{
    aux=(a/b);
    num=((aux+1)*b);
    mov=(num-a);
    cout<<mov<<endl;
    return 0;
}

int main()
{
   cin>>t;
   while(t--)
   {
       mov=0;
       cin>>a>>b;
       if(a%b==0)
       {
           cout<<mov<<endl;
           continue;
       }
       func();

   }
    return 0;
}
