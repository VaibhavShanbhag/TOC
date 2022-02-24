#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string remove(string s,char c)
{
   cout << "Initial string: " << s << endl;
   s.erase(remove(s.begin(), s.end(), c), s.end());
   cout << "Final string: " << s << endl;
   return s;
}

int main()
{	
	int i,n,j,pos;
	char nterminal[100];
	string production[100],r_output;
	
	cout<<"enter number of statements"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter non terminal symbol"<<endl;
		cin>>nterminal[i];
		cout<<"enter production"<<endl;
		cin>>production[i];
	}
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(production[i].find(nterminal[j]) != -1)
			{
				pos = production[i].find(nterminal[j]);
				
				if((production[i][pos-1]=='/' || pos==0) && (production[i][pos+1]=='/' || pos==production[i].length()-1))
				{
					production[i] = remove(production[i],nterminal[j]);
					
					production[i] += "/";
					production[i] += production[j];
				}
			}
		}
	}
	
	cout<<"\n\n";
	for(i=0;i<n;i++)
	{
		cout<<nterminal[i]<<" -> "<<production[i]<<endl;
	}
					
}
