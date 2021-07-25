#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct st{
    ll a,b;
};
bool cmp (st i, st j)
{
    return i.b<j.b;
}
int main ()
{
    ll i,j,n,m,avg,r;
    scanf("%lld%lld%lld",&n,&r,&avg);
    st arr[100005];
    ll sum=0;
    for (i=0;i<n;i++)
    {
        scanf("%lld%lld",&arr[i].a,&arr[i].b);
        sum+=arr[i].a;
    }
    sort(arr,arr+n,cmp);
    ll ans=sum/n;
    ll cnt=0;
    ll p=0;
    ll lage=n*avg-sum;
    ll res=0;
    while (ans<avg)
    {
            if (arr[p].a>=r)
            {
                p++;
            }
            else
            {
                ll x=min(lage,r-arr[p].a);
                arr[p].a+=x;
                lage-=x;
                sum+=x;
                res+=x*arr[p].b;
            }
        ans= sum/n;
    }
    printf("%lld\n",res);
    return 0;
}
