#include<bits/stdc++.h>
using namespace std;
typedef long  long ll;
int main()
{
    ll i,j,n,m,cnt,len1,len2,t,q;
    string st,pat;
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        ll a[55];
        cin>>len1;
        cin>>len2;
        getchar();
        cin>>st;
        cin>>pat;
        cin>>q;
        string temp;
        map<string,ll>mp;
        for (t=0;t<len1;t++)
        {
            for (j=0;j<len1-t;j++)
            {
                for (i=j;i<=(t+j);i++)
                {
                    temp.push_back(st[i]);
                }
                mp[temp]++;
               // cout<<temp<<endl;
                temp.clear();
            }
        }
        temp.clear();
        for (t=0;t<len2;t++)
        {
            cnt=0;
            for (j=0;j<len2-t;j++)
            {
                for (i=j;i<=(t+j);i++)
                {
                    temp.push_back(pat[i]);
                }
                if (mp[temp]!=0);
                cnt++;
               // cout<<temp<<endl;
                temp.clear();
            }
            a[t]=cnt;
        }
        for (i=0;i<q;i++)
        {
            scanf("%lld",&m);
            printf("%lld *\n",a[m-1]);
        }
    }


}
