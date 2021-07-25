#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,tc;
    double mul,x1,x2,x3,y1,y2,y3,ans,area;
    cin>>tc;
    while (tc--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        ans=x1*y2+x2*y3+x3*y1;
        ans=abs(ans-(x2*y1+x3*y2+x1*y3));
        ans=ans*2;
        printf("%.6lf\n",ans);
    }
}
