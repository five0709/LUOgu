#include<bits/stdc++.h>
using namespace std;
string a,b;
int num[3][5000],len[5000];
int main(){
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		num[1][i]=(int)(a[a.size()-1-i]-'0');
	}
	for(int i=0;i<b.size();i++){
		num[2][i]=(int)(b[b.size()-1-i]-'0');
	}
	int carry=0;
	for(int i=0;i<max(a.size(),b.size());i++){	
	int sum; 
	sum=num[1][i]+num[2][i]+carry;
	num[0][i]=sum%10;
	carry=sum/10;
	}
	if(carry){
		cout<<'1';
	}
		for(int i=max(a.size(),b.size())-1;i>=0;i--){
			cout<<num[0][i];
		}
		return 0;
} 