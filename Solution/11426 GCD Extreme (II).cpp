#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n&&n!=0)
    {
        ll i,j;
        ll gcd=0;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                gcd+=__gcd(i,j);
            }
        }
        cout<<gcd<<endl;
    }
}
