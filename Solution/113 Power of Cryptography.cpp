#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	double n,p;

	while(cin>>n>>p){
		//printf("%.0lf\n",pow(num,1.0/base));
		cout<<fixed<<setprecision(0)<<pow(p,1.0/n)<<endl;
	}

	return 0;
}
