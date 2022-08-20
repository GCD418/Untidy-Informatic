#include <bits/stdc++.h>
using namespace std;
long long t, n, x, a, riquillos;
vector <long long> personas;
int main()
{
    cin>>t;
    while(t--)
    {
        personas.clear();
        cin>>n>>x;
        riquillos=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a>=x)
            {
                riquillos++;
            }
            personas.push_back(a);
        }
        sort(personas.begin(), personas.end());

    }
    return 0;
}
