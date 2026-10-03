#include<bits/stdc++.h>
using namespace std;
bool sameType(char a,char b){
	if((a>='0'&&a<='9')&&(b>='0'&&b<='9')) return true;
	if((a>='a'&&a<='z')&&(b>='a'&&b<='z')) return true;
	if((a>='A'&&a<='Z')&&(b>='A'&&b<='Z')) return true;
	return false;
}
int main(){
	int p1,p2,p3;	
     cin>>p1>>p2>>p3;	
     string str;	
     cin>>str;	
      int len=str.size();
      for(int i=0;i<len;i++){
      	if(str[i]!='-'){
      		cout<<str[i];
			  continue; 
		  }
		char left=str[i-1],right=str[i+1];
		if(!sameType(left,right)||right<=left){
			cout<<'-';
			continue;
		}
		if(right==left+1) continue;
		if(p3==1){
			for(char c=left+1;c<right;c++){
				char x=c;
				if(p1==1){
					if(x>='A'&&x<='Z') x=x-'A'+'a'; 
				}else if(p1==2){
					if(x>='a') x=x-'a'+'A';
				}else{
					x='*';
				}
				for(int j=0;j<p2;j++){
					cout<<x;
				}
			}
		}else{
				for(char c=right-1;c>left;c--){
				char x=c;
				if(p1==1){
					if(x>='A'&&x<='Z') x=x-'A'+'a'; 
				}else if(p1==2){
					if(x>='a') x=x-'a'+'A';
				}else{
					x='*';
				}
					for(int j=0;j<p2;j++){
					cout<<x;
				}
			}
		}
	  }
}