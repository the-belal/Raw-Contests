#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,cnt,m,len,n,p;
    string st;
    while (cin>>n)
    {
        int lower_case=0,numbers=0,special_characters=0,uper_case=0;
        getchar();
        cin>>st;
        vector<char>v;
            v.push_back('!');
            v.push_back('(');
            v.push_back(')');
            v.push_back('%');
            v.push_back('@');
            v.push_back('$');
            v.push_back('*');
            v.push_back('#');
            v.push_back('^');
            v.push_back('+');
            v.push_back('-');
            v.push_back('&');
            cnt=0;
        for (i=0;i<n;i++)
        {
            if (st[i]>='0' && st[i]<='9')
                numbers=1;
                if (st[i]>='a' && st[i]<='z')
                  lower_case=1;
                if (st[i]>='A' && st[i]<='Z')
                  uper_case=1;
                  for (j=0;j<v.size();j++)
                    if (v[j]==st[i])
                  {
                      special_characters=1;
                      break;
                  }
        }
        if (special_characters==0)
            cnt++;
        if (numbers==0)
            cnt++;
        if (lower_case==0)
            cnt++;
        if (uper_case==0)
            cnt++;
        if (n+cnt<6)
            cnt+=6-cnt-n;
        cout<<cnt<<endl;
    }
    return 0;
}
