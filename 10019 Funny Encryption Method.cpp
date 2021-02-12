#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n,a=0,c,b,temp;
        cin>>n;
        temp=n;
        while(n!=0){
            a+=n%2;
        n/=2;
        }
        c=0;
        while(temp!=0){
            b=temp%10;
            temp/=10;
            if(b==1||b==2||b==4||b==8)
                c++;
            else if(b==3||b==5||b==6||b==9)
                c+=2;
            else if(b==7)
                c+=3;
        }
        cout<<a<<" "<<c<<endl;
    }


}
