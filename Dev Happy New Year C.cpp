#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int n,a[100];
vector<int>v;
int fun(int i)
{
    if (i>n)
        return 1;
    int mul=a[i],x,y;
    int res=mul*fun(n+1);
    int res2=fun(n+1);
    x=sqrt(res);
    y=sqrt(res2);
    if (x*x==res)
        {
            if (y*y==res2)
                v.push_back(min(res,res2));
            else
                v.push_back(res);
        }
        else
            if (y*y==res2)
        {
            v.push_back(res2);
        }
}
int main ()
{
    int i,j,m,cnt,mul,q[100];
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        scanf("%d",&n);
        q[0]=1;
        for (i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            q[i]=q[i-1]*a[i];
        }
        fun(1);
        for (i=1;i<v.size();i++)
        {
        cout<<v[i]<<endl;
        }
    }
}
