
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll a[100005],q_s[100005];
#define mod 1000000007
int main ()
{
    ll tc,n,m,j,i,q,l,r,t;
    scanf("%lld",&tc);
    for (t=1;t<=tc;t++)
    {
        scanf("%lld%lld",&n,&q);
        q_s[0]=0;
        //memset(q_s,0,sizeof(q_s));
        char ch;
        ll nn=0;
        for (i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            q_s[i]=((q_s[i-1]%mod)+(a[i]%mod))%mod;
        }
        printf("Case %lld:\n",t);

        for (i=0;i<q;i++)
        {
            getchar();
            scanf("%c%lld%lld",&ch,&l,&r);
            if (ch=='+')
            {
                ll ans=(((q_s[r]%mod)-(q_s[l-1]%mod))%mod);
                if (ans<0)
                    ans=ans+mod;
                printf("%lld\n",ans);
            }
            else
            {
                long long int dif=(a[l]%mod-a[r]%mod)%mod;
                if (dif<0)

                {
                    dif=(dif+mod);
                   // cout<<"1\n"; //debugging
                }
                printf("%lld\n",dif);
            }
        }

    }
    return 0;
}
