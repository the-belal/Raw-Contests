#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,cnt,len,tc,t;
    string st;
    cin>>tc;
    while (tc--)
    {
        cin>>st;
        cnt=0;
        len=st.size();
        for (i=0;i<len;i++)
        {
            if (st[i]=='+')
                cnt++;
        }
        printf("Happy New Year-%d\n",cnt+2018);
    }
}
