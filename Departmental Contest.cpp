#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll n,k,a[100005],vis[100005];
ll dfs(int p)
{
    if (p>n)
        return 0;
    vis[p]=1;
    ll ret=0;
    //cout<<a[p]<<endl;
    if (a[p]==1)
    {
        if (vis[p+1]==0)
        ret+=(dfs(p+1)%mmod);
        if (p-1>1 && vis[p-1]==0)
         ret+=(dfs(p-1)%mmod);
    }
    else if (a[p]==2)
    {
        if (p-1>1 && vis[p-1]==0)
        {
            ret+=(dfs(p-1)%mmod);
        }

        if (p-2>1 && vis[p-2]==0)
        {
            ret+=(dfs(p-2)%mmod);
        }

        if (vis[p+1]==0)
        {
            ret+=(dfs(p+1)%mmod);
        }

        if (vis[p+2]==0)
        {
            ret+=(dfs(p+2)%mmod);
        }

    }
    vis[p]=0;
    //cout<<p<<' '<<ret<<endl;
    return (ret+1)%mmod;
}
int main ()
{
    faster;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        ll sum=0;
        //ll a[n+5];
        //memset(vis,0,sizeof(vis));
        for (int i=1; i<=n; i++)
        {

            cin>>a[i];
        }
        sum=dfs(1);

        cout<<sum<<endl;
    }
    return 0;
}
