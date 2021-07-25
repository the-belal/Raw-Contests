#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,sum,tc;
    cin>>tc;
    //getchar();
    while (tc--)
    {
        cin>>n;
        int cnt=0;
        //cout<<(1<<3)<<endl;
        while (n!=0)
        {
            ll r=log2(n);
            if ((1<<r)==n)
            {
                cnt++;
                break;
            }
            else
            {
                n-=(1<<r);
            }
            cnt++;
        }
        if (cnt %2!=0)
            cout<<"First\n";

        else
            cout<<"Second\n";

    }
}
