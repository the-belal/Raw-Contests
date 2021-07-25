#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000000008
int main ()
{
    ll tc,t,n,a[30005],one,ans,di,i,j,cnt;
    scanf("%lld",&tc);
    for (t=1;t<=tc;t++)
    {
        map<ll,ll>mp;
        one=0;
        scanf("%lld",&n);
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            mp[a[i]]=1;
            if (a[i]==1)
                one++;
        }
        if (one>=2)
            cnt=1;
        else
            cnt=0;
            sort (a,a+n);
        for (i=0;i<n;i++)
        {
            if (mx%a[i]==0 && a[i]!=1)
            {
                ans=mx/a[i];
                if (mp[ans]==1)
                {
                    mp[ans]++;
                    mp[a[i]]++;
                    cnt++;
                }
            }
        }
        printf("Case #%lld: %lld\n",t,cnt);
    }
    return 0;
}
