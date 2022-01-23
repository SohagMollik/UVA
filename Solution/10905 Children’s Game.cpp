#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    while(cin>>n){
    if(n==0)return 0;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=n-1;i>=0;i--){
        cout<<a[i];
    }
    cout<<endl;
    }
}
