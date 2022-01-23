#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,sum,odd;
    while(cin>>n){
        odd=(n*(n+2))/2;
        sum=(3*odd)-6;
        cout<<sum<<endl;
    }
}
