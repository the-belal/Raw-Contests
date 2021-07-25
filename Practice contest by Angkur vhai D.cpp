#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,a[100005],b[100005];
    scanf("%lld",&n);
    for (i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        b[i]=a[i];
    }
    sort(b,b+n);
    m=0;
    for (i=0;i<n;i++)
    {
        if (a[i]!=b[i])
            m++;
        if (m>2)
            break;
    }
    if (m>2)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
