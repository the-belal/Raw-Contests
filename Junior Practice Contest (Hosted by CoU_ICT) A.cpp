#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int bigmod ( long long a, int p, int m )
{
    if ( p == 0 )return 1;

    if ( p & 1 )
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else
    {
        long long tmp = bigmod ( a, p / 2, m );
        return ( tmp * tmp ) % m;
    }
}

int main ()
{
    int i,j,tc,m,n,a,p;
    cin>>tc;
    while (tc--)
    {
        cin>>a>>p;
        m=bigmod(a,p,mod);
        cout<<m<<endl;
    }
}
