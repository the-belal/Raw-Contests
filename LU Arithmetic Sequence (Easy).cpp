#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct sum{
    ll x,y;
};
bool cmp (sum a, sum b)
{
    if (a.x==b.x)
        return a.y>b.y;
    return a.x<b.x;
}

int main ()
{
    sum a[10005];
    ll i,j,b,c,tc,t,m,n,su,ans,s,maxi,p,mx;
    scanf("%lld",&tc);
    for (t=1;t<=tc;t++)
        {
            su=0;
            s=0;
            maxi=0;
            p=0;
            scanf("%lld%lld",&n,&m);
            for (i=0;i<n;i++)
                scanf("%lld%lld",&a[i].x,&a[i].y);
            sort (a,a+n,cmp);
            if (a[0].x>m)
                printf("Case %lld: RIP LUIUPC\n",t);
            else
            {

            for (i=0;i<n;i++)
            {
                su+=a[i].x;
                if (su>m)
                    break;
                if (maxi<a[i].y)
                {
                    maxi=a[i].y;
                }
            }
            c=i;
            if (i!=n)
            {
            su-=a[i].x;
            su-=a[i-1].x;
            c=i;
            for (i=c-1;i<n;i++)
            {
                if (su+a[i].x<=m)
                    maxi=max(maxi,a[i].y);
                else
                    break;
            }
            }
            printf("Case %lld: %lld %lld\n",t,c,maxi);
            }
        }
    return 0;
}
