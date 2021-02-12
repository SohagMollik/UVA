#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
   ll n;
   while(cin>>n){
    ll fact=1,i;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
   }
}
