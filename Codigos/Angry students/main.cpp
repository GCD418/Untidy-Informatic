#include <bits/stdc++.h>

using namespace std;
long long t, k, cambios=0, minutos;;
string students;

long long angry()
{
    for(int i=0; i<k; i++)
    {
        cambios=0;
        for(int j=0; j<(k-1); j++)
        {
            if((students[j]=='A') && ((students[j+1]=='P') || (students[j+1]=='P')))
            {
                students[j+1]='J';
                cambios++;
            }
        }
        for(int asd=0; asd<k; asd++)
        {
            if(students[asd]=='J')
            {
                students[asd]='A';
            }
        }
        //cout<<students<<endl;
        minutos++;
        if(cambios==0)
        {
            cout<<minutos-1<<endl;
            return 0;
        }
    }
    cout<<minutos-1<<endl;
    return 0;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>k>>students;
        minutos=0;
        angry();

    }
    return 0;
}
