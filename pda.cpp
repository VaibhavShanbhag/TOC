#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> stack;
	string input;
	
	cout<<"Enter String: ";
	cin>>input;
	
	cout<<"\n";
	
	for(int i=0; i<input.length(); i++){
		if(i==0){
			cout<<"input is "<<input[i]<<endl;
			cout<<"State is 1"<<endl<<endl;
		}
		
		if(stack.empty()){
			stack.push(input[i]);
			if(i != 0){
				cout<<"input is "<<input[i]<<endl;
				cout<<"State is 2"<<endl<<endl;
			}
		}
		
		else{
			if(stack.top() == input[i])
			{
				stack.push(input[i]);
			}
			else
			{
				stack.pop();
			}
			cout<<"input is "<<input[i]<<endl;
			cout<<"state is 2"<<endl<<endl;
		}
		
		if(stack.empty())
		{
			cout<<"number of a is equal to number of b"<<endl;
			cout<<"state is 2"<<endl<<endl;
		}
		
		else{
			if(stack.top() == 'a')
			{
				cout<<"number of a is more than b"<<endl;
				cout<<"state is 3"<<endl<<endl;
			}
			
			else if(stack.top() == 'b'){
				cout<<"number of b is more than a"<<endl;
				cout<<"state is 2"<<endl<<endl;
			}
		}
	}
}
