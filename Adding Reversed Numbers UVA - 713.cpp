#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

     ll tc;
     cin>>tc;
     while (tc--)
     {
         string a,b;
         cin>>a>>b;
         string res;
         int carry=0;
         if (a.size()<b.size()) swap(a,b);

         for (int i=0;i<b.size();i++)
         {
             ll val=a[i]+b[i]-2*'0'+carry;
             carry=val/10;
             if (carry>0)
             {
                 val%=10;
             }
             if (res.size()==0 && val==0) continue;
             res.push_back(val+'0');
         }
         for (int i=b.size();i<a.size();i++)
         {
             ll val=a[i]-'0'+carry;
             carry=val/10;
             if (carry>0)
             {
                 val%=10;
             }
             if (res.size()==0 && val==0) continue;
             res.push_back(val+'0');
         }
         if (carry>0) res.push_back(carry+'0');
         cout<<res<<endl;
     }

    return 0;
}



