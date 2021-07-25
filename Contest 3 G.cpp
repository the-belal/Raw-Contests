#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll i,j,n,p,sum;
    while (scanf("%lld",&n)==1)
    {
        sum=n;
        sum+=n/2+sqrt(n)-3;
        sum
        if (n==1)
            sum=1;
        if (n==2)
            sum=2;
        if (sum==3)
            sum=3;
        printf("%lld\n",sum);
    }
    return 0;
}
