#include <bits/stdc++.h>
using namespace std;
long long t, n, prueba=1;
vector <string> s;
string a;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        s.push_back(a);
        reverse(s[0].begin(), s[0].end());
        cout<<s[0]<<endl;

    return 0;
}
