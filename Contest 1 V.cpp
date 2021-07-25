#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,a[100],ans,cnt,p;
    while (scanf("%lld%lld",&n,&m)==2)
    {
        map<ll,ll>mp;
        p=0;
        for (i=0;i<m;i++)
        {
            scanf("%lld",&a[i]);
            if (a[i]==1)
              p=1;

        }
        sort (a,a+m);
        for (i=0;i<m;i++)
        {
            if (a[i]!=1)
            {
                for (j=i+1;j<m;j++)
                {
                    if (a[j]%a[i]==0)
                        a[j]=1;
                }
            }
        }
        cnt=0;

        for (i=0;i<m;i++)
        {
            printf("%lld ",a[i]);
            if (a[i]!=1)
            {
                for (j=a[i];j<=n;j+=a[i])
                {
                    if (mp[j]==0)
                        cnt++;
                    mp[j]=1;
                }
            }
        }
        printf("%lld\n",n-cnt-p);
    }
    return 0;
}
