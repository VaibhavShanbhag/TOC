#include<iostream>
#include<string>
int dfa = 1, flag = 0;
using namespace std;
void state1(char c){
	if(c =='a'){
		cout<<"--"<<c<<"--"<<dfa;
	}
	
	else{
		dfa = 2;
		cout<<"--"<<c<<"--"<<dfa;
	}
}

void state2(char c){
	if(c =='b'){
		flag = 1;
		cout<<"\nFails : "<<c<<" is not allowed to repeat in state "<<dfa;
	}
	
	else{
		dfa = 3;
		cout<<"--"<<c<<"--"<<dfa;
	}
}

void state3(char c){
	if(c =='a'){
		flag = 1;
		cout<<"\nFails : "<<c<<" is not allowed to repeat in state "<<dfa;
	}
	
	else{
		dfa = 4;
		cout<<"--"<<c<<"--"<<dfa;
	}
}

int main(){
	string inp;
	cout<< "Regular Expression: a*bab(a+b)*\n\n";
	cout<<"Enter a String: ";
	cin>> inp;
	
	for(int i=0; i<inp.length(); i++){
		if(dfa==1){
			state1(inp[i]);
			if(flag == 1)
			break;
		}
		
		else if(dfa==2){
			state2(inp[i]);
			if(flag == 1)
			break;
		}
		
		else if(dfa==3){
			state3(inp[i]);
			if(flag == 1)
			break;
		}
	}
	
	cout<<endl;
	if(dfa == 4)
	cout<<"String is Valid";
	
	else
	cout<<"Invalid";
}
