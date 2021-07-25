#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,len;
    string st;
    while (getline(cin,st))
    {
        len=st.size();
        for (i=0;i<len;i++)
        {
            if (st[i]!=' ')
                cout<<st[i];

        }
        cout<<endl;
    }
    return 0;
}
