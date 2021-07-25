#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,sum;
    map<int,int>mp[10];
    map<string,int>np;
    mp[1][3]=300;
    mp[3][1]=300;
    mp[1][2]=200;
    mp[2][1]=200;
    mp[1][4]=3200;
    mp[4][1]=3200;
    mp[1][5]=8200;
    mp[5][1]=8200;
    mp[2][3]=500;
    mp[3][2]=500;
    mp[2][4]=3000;
    mp[4][2]=3000;
    mp[2][5]=8000;
    mp[5][2]=8000;
    mp[4][5]=11000;
    mp[5][4]=11000;
    mp[2][3]=500;
    mp[4][3]=3500;
    mp[3][4]=3500;
    mp[5][3]=8500;
    mp[3][5]=8500;
    np["Dhaka"]=1;
    np["Chittagong"]=2;
    np["Rajshahi"]=3;
    np["Kathmandu"]=4;
    np["Butwal"]=5;
    int tc;
    cin>>tc;
    getchar();
    while (tc--)
    {
        string s,st;
        cin>>s>>st;
        int source=np[s];
         int des=np[st];
        cout<<mp[source][des]<<endl;
    }
}
