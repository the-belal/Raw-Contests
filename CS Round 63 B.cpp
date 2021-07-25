#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll q,fi,p[100005],s;
double dp[100005];
double fun (ll i)
{

    double res=-1,ans=-1,call;
    double sum,in;

    if (i==-1)
        return s;

        if (dp[i]!=0)
            return dp[i];
            //cout<<"blah";
        call=fun(i-1);
    res=fi+call;
    sum=(double) (call*p[i]*1.0)/100.0;
    ans=call+sum;
    //cout<<res<<' '<<ans<<endl;
    return dp[i]=max(res,ans);
}
int main ()
{
    ll i,j;
    scanf("%lld%lld%lld",&s,&q,&fi);
    memset(dp,0,sizeof(dp));
    for (i=0;i<q;i++)
        scanf("%lld",&p[i]);
    sort(p,p+q);
    double x=fun(q-1);
    printf("%.10lf\n",x);
}
