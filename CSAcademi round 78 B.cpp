#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[105][105],n;
string st[105];
int res(int i, int j, int k)
{
    cout<<i<<' '<<j<<endl;
    if (k==0)
            return 1;
    if (i>=n || j>=n || st[i][j]=='#')
        return 0;

        int r1=res(i+1,j,k-1);
        if (r1==1)
            a[i][j]++;
        r1=res(i-1,j,k-1);
        if (r1==1)
            a[i][j]++;
        r1=res(i,j+1,k-1);
        if (r1==1)
            a[i][j]++;
        r1=res(i,j-1,k-1);
        if (r1==1)
            a[i][j]++;
}
int main ()
{
    ll k,s,p;
    while (cin>>n>>k)
    {

        for (int i=0;i<n;i++)
        {
            cin>>st[i];
        }
        for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
        ll x=res(i,j,k);
        cout<<x<<endl;
                }
        }
    }
}
