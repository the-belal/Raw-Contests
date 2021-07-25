#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,tc,ans,cnt,i,a,b;
    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld",&n);
        for (i=0;;i++)
        {
            a=pow(2,i);
            b=pow(2,i+1);
            if (a==n)
            {
                printf("%lld\n",i+1);
                break;
            }
            else if (a<n && n<b)
                {
                    printf("%lld\n",i+1);
                    break;
                }
        }

    }
    return 0;
}
