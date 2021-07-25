#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,n,m,cnt,p,len;
    int seat[1000],man[1000],temp[1000];
    while (scanf("%d%d",&m,&n)==2)
    {
        if (n==0 && m==0)
            break;
        queue<int>v[10005];
        map<int,int>mp;
        p=1;
        for (i=0;i<m;i++)
            {
                scanf("%d",&man[i]);
                temp[i]=man[i];
            }
        for (i=0;i<n;i++)
        {
            scanf("%d",&seat[i]);
        }
            sort (man,man+m);
            for (i=m-1;i>=0;i--)
            {
                cnt=0;
                for (j=0;j<n;j++)
                {
                    if (seat[j]!=0)
                    {
                        cnt++;
                        seat[j]--;
                        v[man[i]].push(j+1);

                    }
                    if (cnt==man[i])
                        break;
                }
                if (cnt<man[i])
                {
                    p=0;
                    break;
                }


            }

            printf("%d\n",p);
            if (p==1)
            {
               for (i=0;i<m;i++)
            {
               len=v[temp[i]].size();
               for (j=0;j<temp[i];j++)
               {
                   if (j!=0)
                    printf(" ");
                   printf("%d",v[temp[i]].front());
                   v[temp[i]].pop();
               }
                printf("\n");
            }
            }
    }
    return 0;
}
