#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    while(cin>>s1>>s2){
        int len1=s1.length();
        int len2=s2.length();
        int a1[1000]={0};
        int a2[1000]={0};
        char ch1='a';
        int k=(int)ch1;
        int x=0;
        for(int i=0;i<len1;i++){
            a1[(int)s1[i]-k]++;
        }
            for(int j=0;j<len2;j++){
             a2[(int)s2[j]-k]++;
            }

     for(int i=0;i<1000;i++){
        if(a1[i]!=0&&a2[i]!=0)
        {
            for(int j=0;j<min(a1[i],a2[i]);j++){
                int m=k+i;
                s3=(char)(k+i);
                cout<<s3;
            }

        }

     }
    cout<<endl;
    }
}
