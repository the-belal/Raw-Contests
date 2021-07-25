#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[650],n,m;
ll fun (ll posi, ll level)
{

    if (posi==n*m)
        return 1;
    if (posi>n*m)
        return 0;

    if (dp[posi]!=-1)
        return dp[posi];
        //cout<<posi<<endl;
    ll ret1=0,ret2=0;
    if ((posi+1)<=level*m)
        ret1=fun(posi+1,level);
    if (posi+m<=n*m)
    ret2=fun(posi+m,level+1);
    return dp[posi]=(ret1+ret2);
}
int main ()
{
    ll i,ans;
    ll tc,t;
    cin>>tc;
    for (t=1;t<=tc;t++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>m;
        ans=fun(1,1);
        printf("Case %lld: ",t);
        cout<<ans<<endl;
    }
    return 0;
}
