#include<bits/stdc++.h>
using namespace std;
int N,T;
int main(){
	cin>>N>>T;
	vector<pair<double,double>>p(N);
	for(int i=0;i<N;i++){
	       double a,b;
	       cin>>a>>b;
	       p[i].first=b/a;
	       p[i].second=a;
	}
	sort(p.begin(),p.end());
	int sum=0;
	double price=0;
	for(int i=N-1;i>=0;i--){
		if(sum+p[i].second>T){
			price+=(T-sum)*p[i].first;
			break;
		}else{
			sum+=p[i].second;
			price+=p[i].first*p[i].second;
		}
	}
	cout<<fixed<<setprecision(2)<<price<<endl;
	return 0;
}