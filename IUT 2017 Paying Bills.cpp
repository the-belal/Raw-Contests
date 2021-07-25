#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll coin[17],shop[17],n,m;
vector<ll>v[1005];
ll dp[17][33500];
ll fun (ll pos, ll mask)
{
    if (pos>=m)
    return __builtin_popcount(mask);
    if (dp[pos][mask]!=-1)
        return dp[pos][mask];
        ll i,ans=25;
    for (i=0;i<v[shop[pos]].size();i++)
    {
        ll need=v[shop[pos]][i];
        if ((need & mask) !=0)
            continue;
        ans=min (ans,fun(pos+1,(need | mask)));
    }
return dp[pos][mask]=ans;

}
int main ()
{
    ll tc,t,i,j;
    cin>>tc;
    for (t=1;t<=tc;t++)
    {
        for (i=0;i<=1005;i++)
            v[i].clear();
        cin>>n;
        for (i=0;i<n;i++)
            cin>>coin[i];
        cin>>m;
        for (i=0;i<m;i++)
            cin>>shop[i];
        for (ll mask=1;mask<(1<<n);mask++)
        {
            ll sum=0;
            for (i=0;i<n;i++)
            {
                if ((mask & (1<<i))!=0)
                    sum+=coin[i];
            }
            if (sum<=1000)
            v[sum].push_back(mask);
        }
        memset(dp,-1,sizeof(dp));
        ll a=fun(0,0);
        if (a==25)
            a=-1;
       printf("Case %lld: %lld\n",t,a);
    }
    return 0;
}
