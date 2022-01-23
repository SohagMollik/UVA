#include<bits/stdc++.h>
using namespace std;
#define N 100000005
 int prime[N];
 vector<int>v;
 void sieve(int n)
 {
    for(int i=0;i<n;i++){
    prime[i]=1;
    }
    for(int i=4;i<=n;i+=2){
        prime[i]=0;
    }
    prime[0]=0;
    prime[1]=0;

    for(int i=3;i*i<=n;i+=2){
        if(prime[i]==1){
            for(int j=i*i;j<=n;j+=2*i){
                prime[j]=0;
            }
        }
    }
    v.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(prime[i]==1)v.push_back(i);
    }

 }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
   while(cin>>n){

        int ok,temp=0,ans,x;
        sieve(n);
        for(int i=0;i<v.size();i++){
           ok=n-v[i];
           for(int j=i;j<v.size();j++){
            if(ok==v[j]){
             x=v[i];
             ans=v[j];
             temp=1;
             break;
            }
           }

        }
        if(temp==1)
            cout<<n<<" is the sum of "<<x<<" and "<<ans<<"."<<endl;
        else
            cout<<n<<" is not the sum of two primes!"<<endl;

   }
return 0;

}



