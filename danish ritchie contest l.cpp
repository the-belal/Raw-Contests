#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long  i,j,tc,t,k,sum,taken,n,m,c,cost[10005],hp[10005],ta,tb;
    double ans,an;
    cin>>tc;
    while (tc--)
    {
        sum=0;
        taken=0;
        scanf("%lld%lld",&n,&m);
        for (i=0;i<n;i++)
        {
            scanf("%lld%lld",&cost[i],&hp[i]);
        }
        for (i=0;i<n;i++)
        {
            for (j=0;j<n-1;j++)
            {
                ans= ( double ) (hp[j]*1.0/cost[j] *1.0)*1.0;
                an= ( double ) (hp[j+1]*1.0/cost[j+1] *1.0)*1.0;
                if (hp[j]<hp[j+1])
                {
                   ta=cost[j];
                   tb=hp[j];
                   cost[j]=cost[j+1];
                   hp[j]=hp[j+1];
                   cost[j+1]=ta;
                   hp[j+1]=tb;
                }
            }
        }
        for (i=0;i<n;i++)
        {
            printf("%lld %lld\n",cost[i],hp[i]);
            if (sum+cost[i]<=m)
            {
                sum+=cost[i];
                taken+=hp[i];
            }
        }
        printf("%lld\n",taken);
    }
    return 0;
}
