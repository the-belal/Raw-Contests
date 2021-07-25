#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,r,l,ans,maxi,cnt,len,k,n;
    string st;
    while (scanf("%lld",&n)==1)
    {
        map<char,ll>mp;
        if (n==0)
            break;
        getchar();
        getline(cin,st);
        len=st.size();
        l=0;
        r=0;
        cnt=0;
        maxi=0;
        while (1)
        {
            if (cnt<n)
            {
               if (r<len)
               {
                  if (mp[st[r]]==0)
                  cnt++;
                  mp[st[r]]++;
                  r++;
                  if (cnt==1)
                  {
                      while (r<len && mp[st[r]]!=0 )
                      {
                          r++;
                      }
                  }

               }
               else
                l++;
            }
            if (cnt==n)
            {
                ans=r-l+1;
                maxi=max(maxi,ans);
                mp[st[l]]--;
                if (mp[st[l]]==0)
                    cnt--;
                l++;

            }
            if (l==n)
                break;
        }
        printf("%lld\n",maxi);

    }
    return 0;

}
