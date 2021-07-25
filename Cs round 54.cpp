#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,n,m,ans,sum,a[105];
    cin>>n>>m;
    for  (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sum=0;
    sort(a,a+n);
    for (i=0;i<m;i++)
    {
        sum+=a[i];
    }
    if (sum%100==0)
        ans=sum/100;
    else
        ans=sum/100 + 1;
    cout<<ans;
    return 0;
}
