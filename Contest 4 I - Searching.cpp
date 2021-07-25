#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,m,i,j,cnt,p,tc,t,len,k;

    string st[100],s;
    scanf("%lld",&tc);
    for (t=1;t<=tc;t++)
    {
        map<string,int>mp;
        scanf("%lld%lld",&n,&m);
        getchar();
        for (i=0;i<n;i++)
        {

            cin>>st[i];
            mp[st[i]]=1;
        }
        for (i=0;i<m;i++)
        {
            cin>>s;
            if (i==0)
                    printf("Case #%lld:\n",t);
            if (mp[s]==1)
                printf("yes\n");
            else
            {
                p=0;
                for (j=0;j<n;j++)
                {
                    cnt=0;
                  if (s.size()==st[j].size())
                  {
                      len=s.size();
                      for (k=0;k<len;k++)
                      {
                          if (s[k]!=st[j][k])
                            cnt++;
                          if (cnt==2)
                            break;
                      }
                  }
                  if (cnt==1)
                    p++;
                  if (p==2)
                    break;

                }

                if (p==1)
                    printf("yes\n");
                else
                    printf("no\n");
            }

        }

    }
    return 0;
}
