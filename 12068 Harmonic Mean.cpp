#include<bits/stdc++.h>
using namespace std;
int get_LCM(int a,int b)
{
    int m;
    m=(a>b)?a:b;
    while(true){
        if(m%a==0&&m%b==0)
            return m;
        m++;
    }
}
int get_LCM_arry(int a[],int n)
{
    int ans=get_LCM(a[0],a[1]);
    for(int i=2;i<n;i++){
        ans=get_LCM(ans,a[i]);

    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,j=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
     int s=get_LCM_arry(a,n);
     int sum=0;
     for(int i=0;i<n;i++){
        sum=sum+s/a[i];
     }
      int temp=n*s;
      j++;
      if(temp%2==0&&sum%2==0)
      cout<<"Case "<<j<<": "<<temp/2<<"/"<<sum/2<<endl;
    else
    cout<<"Case "<<j<<": "<<temp<<"/"<<sum<<endl;

    }

    return 0;
}
