#include<bits/stdc++.h>
#define ll long long unsigned int
using namespace std;
int main()
{
    ll n,c=1,f=0,s=1,t;
    while(cin>>n){
    while(c<n){
        t=f+s;
        f=s;
        s=t;
        c++;
        if(c==n){
          cout<<"The Fibonacci number for"<<" "<<n<<" "<<"is"<<" "<<t<<endl;
        }

    }
 }
}
