#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,i,j,d;
    while (scanf("%lld",&n)==1)
    {
        printf("%lld",n);
        d=2;
        while (n!=1)
        {
            if (n%d==0)
            {
                n=n/d;
                printf(" %lld",n);
                d=1;
            }

            if (n==1)
                break;
                d++;

        }
        printf("\n");
    }
    return 0;
}
