#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,a[100005],b[100005],n,p=1,x,mini,zero=0,eq=0,maxi=-1;
    vector<ll>v;
    cin>>n;
    for (i=0;i<n;i++)
        cin>>a[i];
    for (i=0;i<n;i++)
    {
        cin>>b[i];
        maxi=max(maxi,b[i]);
        if(a[i]!=b[i])
            eq=0;
        if (b[i]==0)
            zero++;
        if (a[i]-b[i]<0)
            p=0;
            if (i==0)
                mini=a[i]-b[i];
            mini=min(mini,a[i]-b[i]);
    }
    if  (eq==1)
        cout<<b[0]+1<<endl;
    else
    if (zero==n)
        cout<<"1\n";
   else if (p==0)
        cout<<"-1\n";
    else
    {
        ll r=sqrt(mini);
        v.push_back(mini);
        for (i=2;i<=r;i++)
        {
            if (mini%i==0)
            {
                if (i>maxi)
                v.push_back(i);
                if (mini/i>maxi)
                v.push_back(mini/i);
            }
        }
        sort (v.begin(),v.end());
        ll len=v.size();
        for (i=0;i<len;i++)
        {
            if (mini%v[i]==0)
            {
                 p=v[i];
            for (j=0;j<n;j++)
                {
                    if ((a[j]%v[i])!=b[j])
                       {
                           p=-1;
                           break;
                       }


                }
                if (p!=-1)
                    {

                        break;
                    }
                }
            }
        cout<<p<<endl;
    }
}
