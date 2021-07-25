#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,tc,sum,n,a[1005],sub,m,maxi,sum1;
    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld",&n);
        sum1=0;
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum1+=a[i];
        }
        sum1*=n;
        sum=0;
        sub=a[0];
        m=1;
        maxi=a[0];
            for (i=1;i<n;i++)
            {
              sub+=a[i];
              m++;
              if ((sub*m)<maxi)
              {

                  sub-=a[i];
                  sum+=(sub*(m-1));
                  sub=a[i];
                  maxi=0;
                  m=1;
              }
              else
                {
                    maxi=sub*m;
                }

            }
            if (m!=0)
                sum+=maxi;
                sum=max(sum,sum1);
            printf("%lld\n",sum);
    }
    return 0;
}
