#include<bits/stdc++.h>
using namespace std;
struct in {
    int x,y;

};
bool cmp (in i, in j)
{
    if(i.x==j.x)
        return i.y<j.y;
    return i.x<j.x;
}
int main ()
{
    in a[100005];
    int i,tc,j,n,m,k,p,ans,mini,len;
    scanf("%d",&tc);
    while (tc--)
    {
        scanf("%d",&m);
        map<int,int>mp;
        i=0;
        while (scanf("%d%d",&a[i].x,&a[i].y))
        {
            if (a[i].x==0 && a[i].y==0)
                break;
                if (mp[a[i].x]<a[i].y)
                mp[a[i].x]=a[i].y;
                i++;
        }
        vector<int>v[5005];
        sort(a,a+i,cmp);
        for (j=0;j<i;j++)
        {
           /// printf("%d %d\n",a[j].x,a[j].y);
           if (a[j].y>=0)
           {
               for (k=a[j].x;k<=a[j].y;k++)
               {
                   v[max(k,0)].push_back(a[j].x);
               }
           }
        }
        len=v[0].size();

        for (i=0;i<=m;i++)
        {
            len=v[i].size();
            if (i==0)
                for (j=0;j<len;j++)
            {
                if (j==0)
                    p=mp[v[0][j]];
                if (mp[v[0][j]]>=p)
                {
                    mini=v[0][j];
                }
            }
            else
            for (j=0;j<len;j++)
            {
                if (j==0)
                    mini=v[i][j];
                mini=min(mini,v[i][j]);
            }
            if (mp[mini]!=-5)
            {
                printf("%d %d\n",mini,mp[mini]);
                mp[mini]=-5;
            }
        }
    }

}
