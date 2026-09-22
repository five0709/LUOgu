#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	vector<int> num(m);
	vector<string> name(m);
	for(int i=0;i<m;i++){
		cin>>num[i];
		cin>>name[i];}
		int temp=0;
		for(int i=0;i<n;i++){
			int s,d;
			cin>>s>>d;
			if(num[temp]==0&&s==1||num[temp]==1&&s==0){
				temp+=d;
				if(temp<0) temp+=m;
				if(temp>=m) temp-=m; 
			}else{
				temp-=d;
				if(temp<0) temp+=m;
					if(temp>=m) temp-=m; 
			}
		} 
		cout<<name[temp]<<endl;
		return 0;
} 