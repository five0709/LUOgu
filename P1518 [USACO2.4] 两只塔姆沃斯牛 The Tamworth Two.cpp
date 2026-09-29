#include<bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2,m=0,p1=1,p2=1; 
	char g[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cin>>g[i][j];
			if(g[i][j]=='F'){
				x1=i;
				y1=j;
			}else if(g[i][j]=='C'){
				x2=i;
				y2=j;
			}
		}
	}
	bool state=false;
	while(!state){
		if(x1==x2&&y1==y2){
			state=true;
			cout<<m<<endl;
		}else{
			if(p1==1){
				x1--;
				if(x1<0||g[x1][y1]=='*'){
					x1++;
					p1=2;
				}
			}else if(p1==2){
				y1++;
				if(y1>=10||g[x1][y1]=='*'){
					y1--;
					p1=3;
				}
			}else if(p1==3){
				x1++;
				if(x1>=10||g[x1][y1]=='*'){
					x1--;
					p1=4;
				}
			}else if(p1==4){
				y1--;
				if(y1<0||g[x1][y1]=='*'){
					y1++;
					p1=1;
				}
			}
				if(p2==1){
				x2--;
				if(x2<0||g[x2][y2]=='*'){
					x2++;
					p2=2;
				}
			}else if(p2==2){
				y2++;
				if(y2>=10||g[x2][y2]=='*'){
					y2--;
					p2=3;
				}
			}else if(p2==3){
				x2++;
				if(x2>=10||g[x2][y2]=='*'){
					x2--;
					p2=4;
				}
			}else if(p2==4){
				y2--;
				if(y2<0||g[x2][y2]=='*'){
					y2++;
					p2=1;
				}
			}
			m++;
			if(m>1000){
				cout<<0<<endl;
				break;
			}
		} 
	}
return 0;
}