#include<bits/stdc++.h>
using namespace std;
 int n,num=0;
 void method(int a){
 	if(a==n){
 		num++;
 		return;
	 }
	 for(int i=1;i<=2;i++){
	 	a++;
	 	method(a);
	 	if(a==n){
	 		break;
		 }
	 }
 }
 int main(){
 	ios::sync_with_stdio(false);
 	cin.tie(nullptr);
 	cout.tie(nullptr);
 	cin>>n;
 	method(0);
 	cout<<num<<endl;
 	return 0;
 }