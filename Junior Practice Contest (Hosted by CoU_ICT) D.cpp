#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define mod 1000000007
int main ()
{
    ll tc,n,m,j,i;
    scanf("%llu",&tc);
    while (tc--)
    {
        scanf("%llu",&n);
        ll sum=0;
        for (i=0;i<n;i++)
        {
           scanf("%llu",&m);
           sum=(sum%mod + m%mod)%mod;
        }
        printf("%llu\n",sum);
    }
    return 0;
}
