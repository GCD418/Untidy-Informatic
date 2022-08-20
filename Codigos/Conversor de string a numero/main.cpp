#include <bits/stdc++.h>
using namespace std;
string s;
long long number, a;
void conversor(string ss)
{
    long long i=0;
    number=0;
    long long aux=(ss.size()-1);
    while(aux>=0)
    {
        number+=((ss[i]-'0')*pow(10, aux));
        i++;
        aux--;
    }
    //return number;

}
int main()
{
    cin>>s;
    conversor(s);
    a=number;
    cout<<a<<endl;
    cout<<++a<<endl;
    return 0;
}
