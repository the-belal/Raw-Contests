#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main ()
{
    ll tc,n,m,j,i;
    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld",&n);
        double ans;
        m=((n%mod)*((n+1)%mod))%mod/3;
        ans=m/3.0;
        printf("%lld\n",m);
    }
    return 0;
}
