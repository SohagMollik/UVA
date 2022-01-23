#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c,d,s=0,j;
    cin>>t;
    while(t--)
    {
        s++;
        c=0,d=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        for(i=0;i<j-1;i++){
            if(a[i]<a[i+1])
                c++;
            else if(a[i]>a[i+1])
                d++;
            else if(a[i]==a[i+1])
              continue;
        }
        cout<<"Case"<<" "<<s<<":"<<" ";
        cout<<c-1<<" "<<d<<endl;
    }

}
