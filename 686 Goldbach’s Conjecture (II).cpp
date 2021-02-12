#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
 while(cin>>n){
 if(n==0){
        break;
    }
 else{
     int a[n];
bool prime[n+1];
memset(prime,true,sizeof(prime));
    for(int i=2;i*i<n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
int p=0,c=0;
for(int i=2;i<n;i++){
    if(prime[i])
     //cout<<i<<" ";
     a[p]=i;
    p++;
  c++;
}
for( p=0;p<c;p++){
   cout<<a[p]<<" ";
}
cout<<endl;
 }
}
}

