#include<bits/stdc++.h>
#define ll long
using namespace std;
int main()
{

    ll n,a,r;
    while(cin>>n){
        for(a=2;a<65000-1;a++){
            r=pow(a,n);

            if(r%n==a){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
    }
    }
}
