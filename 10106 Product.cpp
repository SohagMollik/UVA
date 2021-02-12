#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
 string s1,s2,sum=0;
 while(cin>>s1>>s2){
    for(int i=0;i<strlen(s1);i++){
        for(int j=0;j<strlen(s2);j++){
            sum=s1[i]*s2[j];
        }
    }
    cout<<sum<<endl;
 }
}

