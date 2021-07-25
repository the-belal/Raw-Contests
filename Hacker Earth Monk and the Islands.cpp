#include<bits/stdc++.h>
using namespace std;
vector<int>ad[100005];
int vis[100005],n,cost[100005];
int bfs (int s)
{
    queue<int>q;
    int i,x,y;
    q.push(s);
    vis[s]=1;
    cost[s]=0;
    while (!q.empty())
    {
        x=q.front();
        q.pop();
        for (i=0;i<ad[x].size();i++)
        {
            y=ad[x][i];
            if (vis[y]!=1)
            {
                vis[y]=1;
                cost[y]=cost[x]+1;
                q.push(y);
                if (y==n)
                    return cost[n];
            }
        }
    }
}
int main ()
{
    int i,j,m,u,v,tc;
    cin>>tc;
    while (tc--)
    {
        memset(vis,0,sizeof(vis));
        memset(cost,0,sizeof(cost));
    cin>>n>>m;
    for (i=0;i<m;i++)
    {
        cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    cout<<bfs(1)<<endl;
    for (i=0;i<n;i++)
        ad[i].clear();
    }
    return 0;
}
