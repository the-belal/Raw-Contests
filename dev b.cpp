#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll a,b;
    while (scanf("%lld%lld",&a,&b)==2)
    {
        if ((a==1 || b==1) && a!=b)
            printf("Odd\n");
        else
            printf("Even\n");
    }
    return 0;
}
