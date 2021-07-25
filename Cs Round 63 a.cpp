#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[1005], b[1005],i,j,n,m,cnt;
    cin >> n >> m;
    for (i=0;i<n;i++)
        cin>>a[i];
    for (i=0;i<m;i++)
        cin>>b[i];
        cnt=0;

        for (i=0;i<=m-n;i++)
        {
            int p=1;
            for (j=0;j<n;j++)
            {
                if ((b[i+j]+a[j])!=1)
                {
                    p=0;
                    break;
                }
            }
            if (p==1)
                cnt++;
        }
    cout << cnt<<endl;
    return 0;
}
