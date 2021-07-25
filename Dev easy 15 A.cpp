#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,dis,cnt,p,a[1005],tc,len,mini;
    cin>>tc;
    while (tc--)
    {
        string st[1005];
        cin>>n;
        mini=99999;
        getchar();
        for (i=0;i<n;i++)
        {
            cin>>st[i];
            len=st[i].size();
            map<char,int>mp;
            dis=0;
            for (j=0;j<len;j++)
            {
                if (mp[st[i][j]]==0)
                {
                    dis++;
                    mp[st[i][j]]=1;
                }
            }
            a[i]=dis;
            mini=min(mini,dis);
        }
        int p=0;
        for (i=0;i<n;i++)
        {
            if (a[i]==mini)
            {
                if (p==0)
                {
                    p=1;
                    cout<<i+1;
                }
                else
                cout<<' '<<i+1;
            }
        }
        cout<<endl;
    }
    return 0;
}
