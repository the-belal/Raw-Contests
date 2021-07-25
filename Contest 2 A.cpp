#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<deque>
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)
using namespace std;
typedef int ll;
int a[1000002];
int main()
{
    __FastIO;
    int len,i,j,cnt,in,n,m,x,y,p;
    scanf("%d%d",&n,&len);
       for (i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       deque<int>dq;
       dq.push_front(0);
       for (i=0;i<n;i++)
       {
           x=dq.front();
           y=dq.size();
           if (a[x]>=a[i])
           {

               while (y>0 && a[x]>=a[i])
               {
                   dq.pop_front();
                   y=dq.size();
                   x=dq.front();
               }
           }
           dq.push_front(i);
           x=dq.back();
           if ((x+len)<=i && dq.size()>0)
            dq.pop_back();
            if (i>len-2)
           printf("%d",a[dq.back()]);
           if (i>len-2 && i!=n-1)
            printf(" ");

       }
       printf("\n");
       dq.clear();
       dq.push_front(0);
       for (i=0;i<n;i++)
       {
           x=dq.front();
           y=dq.size();
           if (a[x]<=a[i])
           {

               while (y>0 && a[x]<=a[i])
               {
                   dq.pop_front();
                   y=dq.size();
                   x=dq.front();
               }
           }
           dq.push_front(i);
           x=dq.back();
           if ((x+len)<=i && dq.size()>0)
            dq.pop_back();
             if (i>len-2)
           printf("%d",a[dq.back()]);
           if (i>len-2 && i!=n-1)
            printf(" ");

       }
       printf("\n");

    return 0;
}
