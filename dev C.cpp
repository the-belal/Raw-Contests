#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll tc,n,ans,i;

    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld",&n);
        ans=1;
        if (n==1)
            printf("YES\n");
        else
        for (i=1;;i++)
        {
           ans*=5;
           if (n<ans)
           {
               printf("NO\n");
               break;
           }
           else if (ans==n)
           {
                printf("YES\n");
               break;
           }
        }

    }
    return 0;
}
