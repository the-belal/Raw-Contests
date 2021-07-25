#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,len;
    string st[1000];
    cin>>n;
    getchar();
    for (i=1; i<=n; i++)
    {
        cin>>st[i];
    }
    int p=0;
    for (i=1; i<=n; i++)
    {
        int fl=0;
        for (j=1; j<=n; j++)
        {

            for (int k=1; k<=n; k++)
            {
                if (i!=j && j!=k && i!=k)
                {
                    string s,sp;
                    s=st[j]+st[k];
                    sp=st[k]+st[j];
                    if (s==st[i] || sp==st[i])
                    {
                        fl=1;
                        if (p==0)
                        {
                            cout<<i;
                            p=1;
                        }
                        else
                            cout<<' '<<i;
                            break;
                    }

                }
            }
            if (fl==1)
                break;
            //cout<<s<<' '<<st[i]<<endl;
        }
    }
    cout<<endl;
    return 0;

}
