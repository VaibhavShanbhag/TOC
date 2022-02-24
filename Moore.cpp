#include<iostream>
#include<string>
using namespace std;

int main(){
	string inp;
	int count = 0;
	cout<<"Moore machine for counting substring abba";
	cout<<"\n\nEnter string: ";
	cin>>inp;
	
	int len = inp.length();
	cout<<"\n(STATE-A|0)";
	
	for(int i=0; i<len; i++){
		if(inp[i] == 'a'){
			cout<<"---"<<inp[i]<<"---";
			cout<<"(STATE-B|0)";
			if(inp[i+1] == 'b'){
				cout<<"---"<<inp[i+1]<<"---";
				cout<<"(STATE-C|0)";
			if(inp[i+2] == 'b'){
				cout<<"---"<<inp[i+2]<<"---";
				cout<<"(STATE-D|0)";
				if(inp[i+3] == 'a'){
				cout<<"---"<<inp[i+3]<<"---";
				cout<<"(STATE-E|1)";
				count++;
				i+=3;
				
			}
			}
		}
	}
	
	else{
		cout<<"---"<<inp[i]<<"---";
		cout<<"STATE-A|0";
	}
}
	if(count >= 1){
		cout<<"\n\nString is accepted";
		cout<<"\ncount of abba: "<<count;
	}
}
