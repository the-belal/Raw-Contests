#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,y;
    int ans;
    int tc,t;
    cin>>tc;
    for (t=1;t<=tc;t++)
    {
        cin>>y;
        ans=y/100;
        if (y%100!=0)
            ans=ans+1;
            cout<<"Case #"<<t<<": ";
            cout<<ans;
            if (ans==21)
                cout<<"st century!\n";
            else if (ans==22)
               cout<<"nd century!\n";
            else if (ans==23)
                cout<<"rd century!\n";
            else
                cout<<"th century!\n";

    }
}
