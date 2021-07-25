#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
bool chk[600005];
vector<ll>primes;
void sieve()
{
    ll n=6e5;
    for (int i=4;i<=n;i+=2) chk[i]=true;
    ll r=sqrt(n);
    for (int i=3;i<=r;i+=2)
    {
        if (chk[i]) continue;
        for (int j=i;j*i<=n;j+=2)
            chk[i*j]=true;
    }
    primes.push_back(2);
    for (int i=3;i<=n;i+=2) if (chk[i]==false) primes.push_back(i);

    return ;
}

vector <ll> factors;
void factorize( ll n ) {
    ll sqrtn = sqrt ( n );
    for ( int i = 0; i < primes.size() && primes[i] <= sqrtn; i++ ) {
        if ( n % primes[i] == 0 ) {
            while ( n % primes[i] == 0 ) {
                n /= primes[i];
                factors.push_back(primes[i]);
            }
            sqrtn = sqrt ( n );
        }
    }
    if ( n != 1 ) {
        factors.push_back(n);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

     ll n;
     sieve();
     while (cin>>n)
     {
         if (n==0) break;
         cout<<n<<" = ";
         if (n<0)
            cout<<"-1 x ";
        factorize(abs(n));
        for (int i=0;i<factors.size();i++)
        {
            if (i==0) cout<<factors[i];
            else { cout<<" x "<<factors[i]; }
        }
        cout<<endl;
        factors.clear();
     }

    return 0;
}
