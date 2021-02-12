#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
  string s;
  int j=0;
  while(cin>>s){
  int n,a,b,i;
  cin>>n;
  j++;
  cout<<"Case "<<j<<":"<<endl;
  while(n--){
    cin>>a>>b;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    bool valid=true;
for(i=a;i<b;i++){
if(s[i]!=s[i+1])
    valid=false;
}
if(valid)
    cout<<"Yes\n";
else
    cout<<"No\n";

  }
}
}
