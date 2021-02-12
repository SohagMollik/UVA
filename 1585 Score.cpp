#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int j=0,sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='O'){
            j++;
            sum=sum+j;

            }
            else
              j=0;

        }
        cout<<sum<<endl;
    }
}
