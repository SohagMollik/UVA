#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int t;
    char s[20];
    cin>>t;
    for(int i=0;i<=t;i++)
    {
        gets(s);
        int l=strlen(s);
        if(l>3)
            cout<<"3"<<endl;
  else{
       if(s[0]=='o'&&s[1]=='n'&&s[2]=='e')
            cout<<"1"<<endl;
      else if(s[0] == 'o' && s[1] == 'n')
            cout<<"1"<<endl;
      else if(s[0] == 'o' && s[2] == 'e')
            cout<<"1"<<endl;
      else if(s[1]=='n'&&s[2]=='e')
            cout<<"1"<<endl;
      else if(s[0]=='t'&&s[1]=='w'&&s[2]=='o')
            cout<<"2"<<endl;
      else if(s[0]=='t'&&s[1]=='w')
            cout<<"2"<<endl;
      else if(s[0]=='t'&&s[2]=='o')
            cout<<"2"<<endl;
      else if(s[1]=='w'&&s[2]=='o')
            cout<<"2"<<endl;
            }

    }
}
