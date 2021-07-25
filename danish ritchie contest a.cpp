#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll check (ll x)
{
    ll low,mid,high,ans,p,y;
    low=1;
    high=100000000000;
    p=-1;
    while (low<=high)
    {
        if ((low+high)%2==0)
        mid=(low+high)/2;
        else
          mid=((low+high)/2)+1;
          if (mid%2==0)
            y=(mid/2)*(mid+1);
          else
           y=(mid)*((mid+1)/2);
        if (x>=y)
        {
            ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
            if (p==mid)
            break;

            p=mid;
    }
    return ans;
}
int main ()
{
    ll n,k,x,y,i,j,s,p,sum,tc,ans;
    scanf("%llu",&tc);
    while (tc--)
    {
        scanf("%llu%llu",&s,&k);

        if (k==0)
            printf("Undetermined\n");
            else if (s==0)
              printf("NO\n");
        else
        {
            n=check (s);
            if (n%2==0)
            y=(n/2)*(n+1);
          else
           y=(n)*((n+1)/2);
        x=s-y;
        if (x%k!=0 || x==0)
            printf("NO\n");
        else
        {
            if (x/k<=n+1)
                printf("%llu\n",x/k);
            else
                printf("Undetermined\n");

        }
        }
    }
  return 0;
}
