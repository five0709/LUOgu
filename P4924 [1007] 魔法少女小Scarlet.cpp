#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,temp=1;
	cin>>n>>m;
	vector<vector<int>>matrix(n+1,vector<int>(n+1,0));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			matrix[i][j]=temp;
			temp++;
		}
	} 
	for(int i=1;i<=m;i++){
			vector<vector<int>>a(n+1,vector<int>(n+1,0));
		int x,y,r,z;
		cin>>x>>y>>r>>z;
		if(z==0){
			for(int j=x-r;j<=x+r;j++){
			for(int k=y-r;k<=y+r;k++){
				a[x+k-y][x+y-j]=matrix[j][k];
			}	
			}
		}else{
				for(int j=x-r;j<=x+r;j++){
			for(int k=y+r;k>=y-r;k--){
				a[x+y-k][y+j-x]=matrix[j][k];
			}	
			}
		}
		for(int j=x-r;j<=x+r;j++){
			for(int k=y-r;k<=y+r;k++){
				matrix[j][k]=a[j][k];
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 