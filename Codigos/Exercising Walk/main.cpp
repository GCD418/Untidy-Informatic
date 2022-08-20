#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, t, x, y, x_a, y_a, x2, y2, x_final, y_final, amp_x, amp_y;
long long func()
{
    x_final=(b-a);
    y_final=(d-c);
    x_a-=x;
    y_a-=y;
    x2-=x;
    y2-=y;
    if((((x2-x_a)<1) && a!=0) || (((x2-x_a)<1) && b!=0))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if((((y2-y_a)<1) && c!=0) || (((y2-y_a)<1) && d!=0))
    {
        cout<<"no"<<endl;
        return 0;
    }
    if(x_final<=x2 && x_final>=x_a && y_final<=y2 && y_final>=y_a)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>x>>y>>x_a>>y_a>>x2>>y2;
        func();
    }
    return 0;
}
