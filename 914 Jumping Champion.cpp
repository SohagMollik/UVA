#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int l,u;
    cin>>l>>u;
    int k=0;
    for(int i=l;i<=sqrt(u)+1;i++){
       int c=0;
       for(int j=2;j<i;j++){
        if(i%j==0)
            c++;
       }
       if(c==0)
        k++;
    }
    int p=k;
    if(p==0)
        cout<<"No jumping champion"<<endl;
    else
        cout<<"The jumping champion is "<<p<<endl;
  }
}
