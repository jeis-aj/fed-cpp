#include <iostream>
#include <math.h>
#include <stack>
using namespace std; 

int main(int argc, char *argv[])
{
	stack <int>stk;
	int temp;
	string line =")((())()";
	int i=0;
	int large=-1;
	int pos =-1;
	while (i<line.length()){
		char c = line[i];
		if ( c =='(' ){
			stk.push(i);
			cout<<"i: "<<i<<endl;
		}
		else if( c ==')' && !stk.empty()){

			/* temp = stk.top(); */
			temp = stk.top();
			temp = abs( temp-= i );				/// length of substring can be obtained by subtracting index(es)
			if (temp > large){
				large = temp;
				pos = stk.top();
			}
			cout<<"temp: "<<temp<<endl;
			stk.pop();
		}
		++i;
	}
	cout<<line<<endl;
	cout<<" largest valid parenthesis: "<<large<<endl;
	cout<<"pos: "<<pos<<endl;
	return 0;
}
