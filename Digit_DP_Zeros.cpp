#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mmod 1000000007
#define pi acos(-1)
string b,a;
ll dp[11][2][2][2][11];
ll ways(int posi, int shuru, int choto, int boro, int cnt)
{
    if (posi==a.size())
        return cnt;
    if (dp[posi][shuru][choto][boro][cnt]!=-1)
    {
        return dp[posi][shuru][choto][boro][cnt];
    }
    ll low=0,high=9;
    if (choto==0)
        high=a[posi]-'0';
        if (boro==0)
        low=b[posi]-'0';

    ll ret=0;
    for (int i=low;i<=high;i++)
    {
        ll curr_cnt=cnt;
        ll curr_choto=choto;
        ll curr_boro=boro;
        if (i<high)
            curr_choto=1;
            if (i>low)
                curr_boro=1;
        if (i==0 && shuru)
            curr_cnt++;
        ret+=ways(posi+1, shuru || i>0,curr_choto,curr_boro,curr_cnt);
    }
    //dp[posi][shuru][choto][boro][cnt]=ret;
    return dp[posi][shuru][choto][boro][cnt]=ret;
}
int main ()
{
    ll tc;
    cin>>tc;
    for (int t=1;t<=tc;t++)
    {
        cin>>b>>a;
        ll ans=0;
        ll sum=0;
        for (int i=0;i<b.size();i++)
        {
            sum=sum*10+b[i]-'0';
        }
        reverse(b.begin(),b.end());
        while (b.size()<a.size())
            b.push_back('0');
        reverse(b.begin(),b.end());
        memset(dp,-1,sizeof(dp));
         ans+=ways(0,0,0,0,0);

        cout<<"Case "<<t<<": ";
        if (sum==0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
