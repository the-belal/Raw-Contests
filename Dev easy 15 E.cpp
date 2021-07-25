#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,p,a[1005],tc,len;
    cin>>tc;
    getchar();
    while (tc--)
    {
        string st;

        cin>>st;
        len=st.size();

        if (len%2==0)
        {
            cout<<"Alice\n";

        }
        else
            cout<<"Bob\n";
    }
    return 0;
}


