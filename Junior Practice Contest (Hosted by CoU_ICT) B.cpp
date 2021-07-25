#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main ()
{
    ll tc,n,m,j,i;
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        if (n%mod==0)
            printf("1\n");
        else
            cout<<n%mod<<endl;
    }
    return 0;
}
