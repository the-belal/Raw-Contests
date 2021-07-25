#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll tc,t,n;
    cin>>tc;
    for (t=1;t<=tc;t++)
    {
        cin>>n;
        printf("Case %lld-> ",t);
        if (n==1|| n==3)
            cout<<"YES;\n";
        else
            cout<<"NO;\n";
    }
    return 0;
}
