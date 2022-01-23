#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {

        if(x==0&&y==0)break;
        for(int i=x;i<=y;i++){
                int c=0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    c++;
                }

            }
            if(c==0){
                    if(i!=1)
                v.push_back(i);
            }
        }

        for(int k=0;k<v.size();k++){
            /*if((v[k+1]-v[k])==(v[k+2]-v[k+1]))
                cout<<v[k]<<" "<<v[k+1]<<" "<<v[k+2];*/
            int p=v[k+1]-v[k];
            k=k+1;
            int q=v[k+1]-v[k];
            k=k-1;
            if(p==q)
                cout<<v[k]<<" "<<v[k+1]<<" ";
        }
        cout<<endl;
        v.clear();
    }
}
