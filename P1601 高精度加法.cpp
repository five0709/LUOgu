#include<bits/stdc++.h>
using namespace std;
int main(){
    string m,n;
    cin>>m>>n;
    int num1=m.size(),num2=n.size(),temp[666],i=0;
    fill(temp,temp+666,0);
    num1--,num2--;
    while(num1>=0||num2>=0){
    	int s;
    	if(num1>=0&&num2>=0){
    		s=m[num1]+n[num2]-'0'-'0';
    		temp[i]+=s;
    		if(temp[i]>=10){
    			temp[i]%=10;
				temp[i+1]++;
			}
			num1--,num2--;
		}else if(num1<0&&num2>=0){
				s=n[num2]-'0';
    		temp[i]+=s;
    		if(temp[i]>=10){
    			temp[i]%=10;
				temp[i+1]++;
			}
			num2--;
		}else if(num1>=0&&num2<0){
				s=m[num1]-'0';
    		temp[i]+=s;
    		if(temp[i]>=10){
    			temp[i]%=10;
				temp[i+1]++;
			}
			num1--;
		}else{
			if(temp[i]>=10){
    			temp[i]%=10;
				temp[i+1]++;
			}
		}
		i++; 
	}
	bool state=false;
	for(int i=555;i>=0;i--){
		if(state==false&&temp[i]!=0){
			state=true;
		}
		if(state){
			cout<<temp[i];
		}else if(!state&&i==0){
			cout<<temp[i];
		}
	}
	return 0;
}