#include <bits/stdc++.h>
using namespace std;
string s;
long long a;
int main()
{
    cin>>s;
    a=(s.size()-1);
    if((s[a]-'0')%2==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
    return 0;
}
