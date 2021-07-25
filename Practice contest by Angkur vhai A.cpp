#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct st{
    ll l,s,posi;
};
st a[200005];
bool cmp(st i,st j)
{
    if (i.l==j.l)
        return i.s>j.s;
    else
        return i.l>j.l;
}
int main ()
{
    ll i,j,n,m;
    scanf("%lld",&n);
    map<ll,ll>mp;
    ll maxi=-1;
    for (i=0;i<n;i++)
    {
        ll x;
        scanf("%lld",&x);
        mp[x]++;
        maxi=max(maxi,mp[x]);
    }
    scanf("%lld",&m);
    for (i=0;i<m;i++)
    {
        ll x;
        scanf("%lld",&x);
        a[i].l=mp[x];
        a[i].posi=i+1;
    }
    for (i=0;i<m;i++)
    {
        ll x;
        scanf("%lld",&x);
        a[i].s=mp[x];
    }
    sort(a,a+m,cmp);
    printf("%lld\n",a[0].posi);
    return 0;
}
