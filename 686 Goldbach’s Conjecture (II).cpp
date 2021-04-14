#include<bits/stdc++.h>
using namespace std;
#define N 32770
bool prime[N];
vector<int>v;
void sieve(int n)
{
   for(int i=0;i<n;i++){
    prime[i]=true;
   }
   prime[0]=false;
   prime[1]=false;
   for(int i=4;i<=n;i+=2){
    prime[i]=false;
   }
   for(int i=3;i*i<=n;i+=2){
    if(prime[i]==true){
        for(int j=i*i;j<n;j+=2*i){
            prime[j]=false;
        }
    }
   }
   v.push_back(2);
   for(int i=3;i<n;i+=2){
    if(prime[i]==true)
        v.push_back(i);
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
      int n;
      while(cin>>n){
      int x=n;
     if(n==0)return 0;
     else{
       sieve(n);
       int ok,c=0;
       for(int i=0;i<v.size();i++){
         ok=x-v[i];
         for(int j=i;j<v.size();j++){
            if(ok==v[j]){
                c++;
            }
         }
       }
       cout<<c<<endl;
     }
     v.clear();
      }
    return 0;
}
