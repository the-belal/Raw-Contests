#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int tc,i,t,n,len;
    cin>>tc;
    getchar();
    for (t=1;t<=tc;t++)
    {
        string st;
        char maxi;
        cin>>st;
        len=st.size();
        for (i=0;i<len;i++)
        {
            if (i==0)
                maxi=st[0];
            if (maxi<st[i])
                maxi=st[i];
        }
        printf("Case %d: ",t);
        int ans;
        if (maxi>='a')
            {
                ans=37+maxi-'a';
                printf("%d\n",ans);
            }
        else if (maxi>='A')
            {
                ans=11+maxi-'A';
                printf("%d\n",ans);
            }
        else
           {
                ans=1+maxi-'0';
                if (ans<2)
                    ans=2;
                printf("%d\n",ans);
            }

    }
    return 0;
}

