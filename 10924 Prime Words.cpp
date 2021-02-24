#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  while(cin>>s)
  {
      int sum=0;

      for(int i=0;i<s.size();i++){
        if(s[i]>=97&&s[i]<=122){
            sum+=s[i]-96;
        }
        else if(s[i]>=65&&s[i]<=90){
            sum+=s[i]-38;
        }
      }
      int c=0;
      for(int j=2;j<=sqrt(sum);j++){
        if(sum%j==0){
            c++;
        }
      }
      if(c==0)
        cout<<"It is a prime word.\n";
        else
        cout<<"It is not a prime word.\n";

  }
}
