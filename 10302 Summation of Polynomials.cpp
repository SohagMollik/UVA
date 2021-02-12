#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
 ll n;
 while(cin>>n){
    ll sum=0,i;
    for(i=1;i<=n;i++){
        sum=sum+pow(i,3);
    }
    cout<<sum<<endl;
 }

}
