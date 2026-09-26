#include<bits/stdc++.h> 
using namespace std;
int main(){
	string m,n;
	int a[10000];
	cin>>m>>n;
	int num1=m.size(),num2=n.size(),r=0;
	fill(a,a+10000,0);
	for(int i=num1-1;i>=0;i--){
		int q=m[i]-'0';
		int t=0;
		for(int j=num2-1;j>=0;j--){
			int w=n[j]-'0';
			a[r+t]+=q*w;
			if(a[r+t]>=10){
				a[r+t+1]+=a[r+t]/10;
				a[r+t]%=10;
			}
			t++;
		}
		r++;
	}
//	for(int i=0;i<9000;i++){
//		if(a[i]>=10){
//			a[i+1]+=a[i]/10;
//			a[i]%=10;
//		}
//	}
	bool state=false;
	for(int i=9000;i>=0;i--){
		if(state) cout<<a[i];
		if(!state&&a[i]!=0){
			state=true;
			cout<<a[i];
		}else if(!state&&i==0) cout<<'0';
	}
	return 0;
}