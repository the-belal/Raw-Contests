#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double check (ll h, ll s)
{
    int i,j;
    double low,high,mid,ans,cal,an;
    j=900;
    low=0;
    high=10000000000000007;
    while (j--)
    {
        mid= (double ) (low+high)/2.0;
        cal=(h+mid)*(h+mid);
        an=mid*mid+s*s;
        if (cal>an)
        {
            high=mid;
        }
        else
        {
            ans=mid;
            low=mid;
        }
    }
    return ans;
}
int main ()
{
    ll tc,j,i,h,s;
    double d,ans;
    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld%lld",&h,&s);
        ans=check (h,s);
    printf("%.10lf\n",ans);

}
return 0;
}
