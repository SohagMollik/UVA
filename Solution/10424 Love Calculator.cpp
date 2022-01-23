#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;

    while(getline(cin,s),getline(cin,s1))
    {

       int sum=0;
        for(int i=0;i<s.length();i++){
           if(islower(s[i]))sum+=s[i]-'a'+1;
           else if(isupper(s[i]))sum+=s[i]-'A'+1;

        }
         if(sum%9==0)sum=9;
         else sum%=9;

         int sum1=0;
         for(int i=0;i<s1.length();i++){
           if(islower(s1[i]))sum1+=s1[i]-'a'+1;
           else if(isupper(s1[i]))sum1+=s1[i]-'A'+1;
        }

        if(sum1%9==0)sum1=9;
        else sum1%=9;

        int ans=max(sum,sum1);
        int result=min(sum,sum1);
        double flag=(double)((result*100.0)/ans);
        cout<<setprecision(2)<<fixed<<flag<<" %"<<endl;
    }
}
