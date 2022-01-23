#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int temp,c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){

                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    c++;
                }

            }

        }
        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
    }
}
