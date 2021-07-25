#include<bits/stdc++.h>
using namespace std;
int f[100005];
int fibo ()
{
    f[0]=1;
    f[1]=1;
    int a=0,b=1,s=1,i;
    for (i=2;;i++)
    {
        s=a+b;
        a=b;
        b=s;
        if (s>100005)
            break;
        f[s]=1;
    }
}
int main ()
{
    fibo();
    int i,len,b,m,tc,t;
    string st;
    scanf("%d",&tc);
    getchar();
    for (t=1;t<=tc;t++)
    {
        m=0;
        b=0;
        cin>>st;
        len=st.size();
        for (i=0;i<len;i++)
        {
            if (f[i]==0)
            {
                if (st[i]=='B')
                    b++;
                else
                    m++;
            }
        }
        printf("Case #%d: ",t);
        if (m==b)
            printf("Meh :\\\n");
            else if (b>m)
            {
                printf("Aaj Kemon Bodh Korcho\n");
            }
            else
                printf("Hala Madrid\n");
    }
    return 0;
}
