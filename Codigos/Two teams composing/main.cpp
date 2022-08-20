#include <bits/stdc++.h>
using namespace std;
long long t, n, a, xx;
set <long long> diferentes;
//vector<long long>iguales;
int main()
{
    cin>>t;
    while(t--)
    {
        a=0;
        diferentes.clear();
        //iguales.clear();
        cin>>n;
        long long students[n];
        for(int i=0; i<n; i++)
        {
            cin>>students[i];
            diferentes.insert(students[i]);
        }
        xx=diferentes.size();
        sort(students, students+n);
        for(int i=0; i<n-1; i++)
        {
            if(students[i]==students[i+1])
            {
                continue;
            }
            if(students.count(students[i])>a && find(students[i])<=xx)
            {
                a=find(students[i]);
            }
        }
        cout<<min(a, xx)<<endl;
    }
    return 0;
}
