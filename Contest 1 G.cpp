#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i, j, n, tc,t,a[1006],active,p,k,sum,in;
    scanf("%lld",&tc);
    while (tc--)
    {
        k=0;
        scanf("%lld",&n);
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        sum=0;
        if (n%2!=0)
            in=4;
        else
           in=3;
        for (i=in;i<n;i+=2)
        {
            sum+=a[i];
        }

        p=n/2-1;
        sum+=a[1]+(p*(a[0]+2*a[1]));
        if (n%2!=0)
            sum+=a[2]+a[0];

        printf("%lld\n",sum);
        p=n/2;
        j=0;
        p*=3;
        if (n%2==0)
            j=2;
        else
            j=3;
       /* for (i=3;i<=n;i=+2)
        {
            printf("%lld %lld\n",a[0],a[1]);
            if (i!=n)
               {
                    printf("%lld %lld\n",a[i],a[i+1]);

               }
               if (i!=p)
               {
                   if (i%2!=0)
                    printf("%lld\n",a[0]);
                   else
                    printf("%lld\n",a[1]);
               }

        }*/
    }
    return 0;
}
