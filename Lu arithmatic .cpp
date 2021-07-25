#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,a,b,c,tc,t,m,n,sum,ans;
    scanf("%lld",&tc);
    for (t=1;t<=tc;t++)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&n);
        printf("Case %lld: ",t);
        if (abs(a-b)!=abs(b-c))
            printf("Error\n");
        else
        {
            m=b-a;
            m*=(n-1);
            printf("%lld\n",a+m);
        }
    }
    return 0;
}
