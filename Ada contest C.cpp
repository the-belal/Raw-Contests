#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll tc,l,r,ans;
    cin>>tc;
    while (tc--)
    {
        cin>>l>>r;
        ans=0;
        if (l%2==0 || r%2==0)
            ans=1;
            if (l==1)
                ans++;
            ans+=((r-l))/2;
            cout<<ans<<endl;
    }
    return 0;
}
