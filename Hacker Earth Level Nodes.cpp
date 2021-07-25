#include<bits/stdc++.h>
using namespace std;
vector<int>ad[100005];
int vis[100005],cost[100005],level;
int bfs(int s)
{
    int cnt=0;
    queue<int>q;
    q.push(s);
    vis[s]=1;
    cost[s]=1;
    int x,y;
    while (!q.empty())
    {
        x=q.front();
        q.pop();
        for (int i=0;i<ad[x].size();i++)
        {
            y=ad[x][i];
            if (vis[y]!=1)
            {
                vis[y]=1;
                cost[y]=cost[x]+1;
                if (cost[y]==level)
                    cnt++;
                    q.push(y);
            }
        }
    }
    return cnt;
}
int main()
{
    int n,i,u,v;
    cin>>n;
    for (i=0;i<n-1;i++)
    {
        cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    cin>>level;
   int ans= bfs(1);
   cout<<ans<<endl;
   return 0;
}
