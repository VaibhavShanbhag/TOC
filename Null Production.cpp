#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string remove(string s,char c){
	cout<<"Intial String: "<<s<<endl;
	s.erase(remove(s.begin(), s.end(),c),s.end());
	cout<<"Final String: "<<s<<endl;
	return s;
}

int main(){
	int i, n;
	char nterminal[100];
	string production[100],r_output;
	
	cout<<"Enter number of statements"<<endl;
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"Enter non terminal symbol"<<endl;
		cin>>nterminal[i];
		cout<<"Enter production"<<endl;
		cin>>production[i];
	}
	
	for(i=0; i<n; i++){
		if(production[i].find('$') != -1){
			production[i] = remove(production[i],'$');
			for(int j=0; j<n; j++){
				if(production[j].find(nterminal[i]) != -1){
					r_output = remove(production[j],nterminal[i]);
					production[j] += "/";
					production[j] += r_output;
				}
			}
		}
	}
	
	cout<<"\n\n";
	
	for(i=0; i<n; i++){
		cout<<nterminal[i]<<" -> "<<production[i]<<endl;
	}
}

