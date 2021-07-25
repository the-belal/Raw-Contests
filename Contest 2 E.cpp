#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
int main ()
{
    ll i,j,l,r,cnt,maxi,p,ans,n,k,sum;

    while (scanf("%lld%lld",&n,&k)==2)
    {
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sum=a[0];
        cnt=0;
        l=0;
        maxi=0;
        r=0;
        while (1)
        {

            if (sum>k)
            {
                ans=r-l;
                maxi=max(maxi,ans);
                if (l!=n)
                {
                    sum-=a[l];
                l++;
                }
            }
            if (sum<=k)
            {
                ans=r-l;
                maxi=max(maxi,ans);
                if (r!=n)
                {
                    r++;
                sum+=a[r];
                }
                else
                    l++;
            }
            if (l==n)
                break;
        }
        printf("%lld\n",maxi);
    }
    return 0;
}
