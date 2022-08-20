#include<bits/stdc++.h>
#include<climits>

using namespace std;

#define debug(x,y) cout<<(#x)<<" " <<(#y)<<" is " << (x) <<" "<< (y) << endl
#define watch(x) cout<<(#x)<<" is " << (x) << endl
#define fast ios_base::sync_with_stdio(false)
#define fie(i,a,b) for(i=a;i<b;i++)
#define MOD 1000000007
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define FI first
#define SE second
#define ll long long
#define lld long long int
#define ALL(x) (x).begin(),(x).end()

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef long long LL;

const lld INF = (1ll)<<56;
const long long OO = 2e18;
const double pi=2*acos(0.0);

bool isprime(long long int a)
{
    if(a==1)
    {
        return false;
    }
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

bool iscoprime(int a,int b)
{
    int i;
    for(i=2; i<=min(a,b); i++)
    {
        if(a%i==0 && b%i==0)
        {
            return false;
        }
    }
    return true;
}

ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int maxA(vi a)
{
    int m=0;
    for(int i=0; i<a.size(); i++)
    {
        m=max(m,a[i]);
    }
    return m;
}

int minA(vi a)
{
    int m=100000;
    for(int i=0; i<a.size(); i++)
    {
        m=min(m,a[i]);
    }
    return m;
}

vi freqN(vi a, int n)
{
    vi f(n);
    for(int i=0; i<a.size(); i++)
    {
        f[a[i]]++;
    }
    return f;
}

vi freqA(vi a)
{
    vi f(26);
    //f={0};
    for(int i=0; i<a.size(); i++)
    {
        f[a[i]-'0']++;
    }
    return f;
}

bool mycomp(const pair<long int,long int>&p1, const pair<long int,long int>&p2)
{
    if(p1.second < p2.second)
        return true;
    else if(p1.second==p2.second)
        return p1.first<p2.first;
    else
        return false;
}

unsigned int rightmostsetbit(unsigned int n)
{
    return n & -n;
}

bool cmp(pair<lld,lld>&p1, pair<lld,lld>&p2)
{
    if((p1.first*p1.second)==(p2.first*p2.second))
        return p1.second>p2.second;
    return (p1.first*p1.second)>(p2.first*p2.second);
}


int main()
{

    return 0;
}
