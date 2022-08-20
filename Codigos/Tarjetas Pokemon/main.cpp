#include <bits/stdc++.h>
using namespace std;
long n, m, cards=0;
string s, q;
bool a=false;
long func()
{
    for(int i=0; i<n; i++)
    {
        a=false;
        int j=0;
        while(a==false && j<m)
        {
            if(s[i]==q[j])
            {
                cards++;
                q[j]='.';
                a=true;
            }
            j++;
        }
        //cout<<s<<"  "<<q<<"  ";
    }
    cout<<cards<<endl;
    return 0;
}

int main()
{
    cin>>n>>m>>s>>q;
    func();
    return 0;
}
