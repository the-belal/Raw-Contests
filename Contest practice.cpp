#include<bits/stdc++.h>
using  namespace std;
typedef long long ll;
ll  n,a[100005];
vector<ll>adj[100005];
bool vis[100005],flag=true;
ll cal(int node)
{
    int i;
    if (node!=1 && adj[node].size()==1)
        return 1;
    if (vis[node]==true)
    {
        return 0;
    }
    vis[node]=true;
    ll cnt=0;
    for (i=0;i<adj[node].size();i++)
    {
        ll x=adj[node][i];
        if (vis[x]==false)
        cnt+=cal(x);

    }
    if (cnt<3)
        flag=false;
    return 0;
}
int main ()
{
    ll u,v;
    cin>>n;
    for (int i=1;i<n;i++)
    {
        cin>>u;
        adj[i+1].push_back(u);
        adj[u].push_back(i+1);
    }
    cal(1);
    if (flag)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
