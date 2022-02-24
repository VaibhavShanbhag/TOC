#include<iostream>
#include<string>
using namespace std;

int main(){
	string inp;
	int count = 0;
	cout<<"Mealy machine for counting substring abba";
	cout<<"\n\nEnter string: ";
	cin>>inp;
	
	int len = inp.length();
	cout<<"\nSTATE-A";
	
	for(int i=0; i<len; i++){
		if(inp[i] == 'a'){
			cout<<"---"<<inp[i]<<"|0---";
			cout<<"STATE-B";
			if(inp[i+1] == 'b'){
				cout<<"---"<<inp[i+1]<<"|0---";
				cout<<"STATE-C";
			if(inp[i+2] == 'b'){
				cout<<"---"<<inp[i+2]<<"|0---";
				cout<<"STATE-D";
				if(inp[i+3] == 'a'){
				cout<<"---"<<inp[i+3]<<"|1---";
				cout<<"STATE-E";
				count++;
				i+=3;
				
			}
			}
		}
	}
	
	else{
		cout<<"---"<<inp[i]<<"|0---";
		cout<<"STATE-A";
	}
}
	if(count >= 1){
		cout<<"\n\nString is accepted";
		cout<<"\ncount of abba: "<<count;
	}
}
