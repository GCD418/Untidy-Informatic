#include <bits/stdc++.h>
using namespace std;
int n, restar1=0, restar2=0;
string s, s1, s2;

int main()
{
    cin>>n>>s;
    s1=s;
    s2=s;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(((s1[i]-'0')==((s1[j]-'0')+1))||((s1[i]-'0')==((s1[j]-'0')-1)))
            {
                s1[i]='.';
                restar1++;
                cout<<s1<<endl;
            }
        }
    }
    cout<<restar1<<endl;
    return 0;
}
