#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    while(cin>>n){
            i++;
          if(n<0)
            break;
        else if(n==1)
           cout<<"Case "<<i<<": "<<0<<endl;
            for(int j=0;j<14;j++){
                if(pow(2,j)<n&&n<=pow(2,j+1))
                cout<<"Case "<<i<<": "<<j+1<<endl;

            }
    }
}
