#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,dis,cnt,p,a[1005],tc,len,maxi;
    cin>>tc;
    while (tc--)
    {
        string st;
        cin>>n;
        getchar();
        cin>>st;
        maxi=-1;
        map<char,int>mp;
        for (i=0;i<n;i++)
        {
            mp[st[i]]++;
            maxi=max(maxi,mp[st[i]]);
        }

        cout<<n-maxi<<endl;
    }
    return 0;
}

