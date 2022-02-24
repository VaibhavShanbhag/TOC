#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Turing machine that accepts palindrome\n\tstring should contain a and b only\n\tnull is denoted by 0" << endl;
    string tape;
    cout << "Enter the string: ";
    cin >> tape;
    tape = "0" + tape + "0";
    int head = 1;
    int state = 0;
    cout << "Tape: " << tape << endl;
    cout << "state = " << state << " head = " << head << endl;
    
    char c;
    while(true)
    {
		c = tape[head];
		tape[head] = '0';
		head++;
		
		if(tape[head] == '0' )
		{
			cout<<"The String is palindrome";
			break;
		}
		
		while(tape[head]!='0')
		{
			head++;
		}
		head--;
		
		if(c == tape[head])
		{
			tape[head] = '0';
			head--;
			
			while(tape[head]!='0')
			{
				head--;
			}
			head++;			
		}
		else
		{
			cout<<"The String is not palindrome";
			break;
		}
		}
	}
