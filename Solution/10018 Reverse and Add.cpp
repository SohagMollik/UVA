#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
ll t,n;
cin>>t;
while(t--){
    cin>>n;
    ll a,s,c=0;
    a=n;
    while(1){
        s=0;
        while(n!=0){
            s=s*10+n%10;
            n/=10;
        }
        if(s==a)
            break;
        else{
            n=s+a;
            a=s+a;
            c++;
        }
    }
    cout<<c<<" "<<a<<endl;

}

}
