#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef unsigned long long ll;
//ll mp[100006];
struct st{
    ll x,value,posi;

};
bool cmp (st i , st j)
{
    if (i.x<j.x)
        return true;
    if (i.x==j.x)
    {
       return  i.value<j.value;
    }
    return false;
}
int main()
{
    ll n,i,j,cnt,tc,p;
   static st a[100005];
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        cnt=0;
        ll maxi=0;
        //ll mini=100000;
        //memset(mp,0,sizeof(mp));
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i].value);
            a[i].x=__builtin_popcount(a[i].value);
            a[i].posi=i;
            maxi=max(maxi,a[i].value);
            //mini=min(mini,mp[a[i]]);
        }
        ll p=a[0].posi;
        ll q=a[1].posi;
        ll ans=0;
        //cout<<maxi<<endl;
        maxi=(ceil) (log2(maxi));
        //cout<<maxi<<endl;
        ans=(1<<maxi)-1;
        //cout<<maxi<<" "<<ans<<endl;
        for (i=0;i<n;i++)
        {
            //cout<<ans;
            if (i==p || i==q)
                continue;
            ans = ans & a[i].value;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
