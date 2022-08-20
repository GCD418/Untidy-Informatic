#include <bits/stdc++.h>
using namespace std;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
#define pb 				   push_back
#define endl 			   '\n'
typedef long long          ll;
typedef vector < int >     vi;

int t, n, x, sum, aux, no;
void func()
{
    if((sum%x)!=0)
    {
        cout<<n<<endl;
        return;
    }
    if(no>0)
    {
        cout<<n-1<<endl;
        return;
    }
    cout<<"-1"<<endl;
    return;
}
int main()
{
    cin>>t;
    while(t--)
    {
        no=sum=0;
        cin>>n>>x;
        int a[n];
        ffor(i, 0, n)
        {
            cin>>a[i];
        }
        ffor(i, 0, n)
        {
            sum+=a[i];
        }
        func();
    }
    return 0;
}
