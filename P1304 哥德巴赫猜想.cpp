#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
	if(n==1) return false;
	if(n==2) return true;
	for(int i=2;i*i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	for(int i=4;i<=n;i+=2){
		for(int j=2;j<=i/2;j++){
			if(is_prime(j)&&is_prime(i-j)){
				cout<<i<<'='<<j<<'+'<<i-j<<endl;
				break;
			}
		}
	}
	return 0;
} 
