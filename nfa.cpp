#include<iostream>
#include<string.h>
using namespace std;
int dfa=1,flag=0;
void state1(char c){
	if(c=='b'){
		dfa=2;
		cout<<" --"<<c<<" -- "<<dfa;
	}
	else{
		cout<<"\n"<<c<<" character is not allowed in state  "<<dfa<<"\n";
		flag=1;
		return;
	}
}
void state2(char c){
	if(c=='b'){
		dfa=2;
		cout<<"-- "<<c<<" -- "<<dfa;
	}
	else{
		dfa=3;
		cout<<"-- "<<c<<" -- "<<dfa;
	}
}
void state3(char c){
		if(c=='b'){
		dfa=2;
		cout<<"-- "<<c<<" -- "<<dfa;
	}
	else{
		cout<<"\n"<<c<<"character is not allowed in state "<<dfa<<"\n";
		flag=1;
		return;
	}
}
int main(){
	string s;
	cout<<"NFA for representing (ba+b)* ba\n";
	cout<<"Enter a string : ";
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='b' || s[i]=='a'){
			continue;	
		}
		else{
			cout<<s[i]<<" character is not allowed \n";
			break;
		}
			
	}
	cout<<"\n 1 ";
	for(int i=0;i<s.length();i++){
		if(dfa==1){
			state1(s[i]);
			if(flag==1){
				break;
				
			}
		}
		else if(dfa==2){
			state2(s[i]);
			if(flag==1){
					break;
			}
		}
		else if(dfa==3){
			state1(s[i]);
			if(flag==1){
					break;
			}
		}
		
			
	}
//	cout<<"\n flag "<<flag<<" dfa: "<<dfa<<endl;
	if(flag==0 && dfa==3){
		cout<<"\n The string is Valid\n";
	}
	else{
		cout<<"\n The string is Invalid\n";
	}
}
