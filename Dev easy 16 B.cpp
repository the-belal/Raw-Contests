#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,r,p,sum,dif,ans,a[1003];
    ll tc,t;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>r>>p;
        for (i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll pre=0;
        sum=0;
        if (n==0)
            sum=r-p;
        sum=max(sum,pre);
        for (i=0; i<n; i++)
        {
            if (a[i]>=r)
            {
                if (r-pre>p)
                {

                    sum+=r-pre-p;
                    p+=r-pre-p;
                }
                break;
            }
            if ((a[i]-pre)>p)
            {
                sum+=(a[i]-pre)-p;
                p+=a[i]-pre-p;
            }
            if (pre<a[i])
            pre=a[i];
        }
        if (a[n-1]<r)
        {
            if (r-a[n-1]-p>0)
                sum+=r-a[n-1]-p;
        }
        cout<<sum<<endl;
    }
}
