#include <iostream>
using namespace std; 

int main(){
	string line;
	line  = "(((((())()()()";
	int sz = line.size();
	cout<<sz<<endl;
	int i=0,large =0,j=0;
	while( i < sz )
	{
			while (line[i]=='('){
				if (j== 0 ){ j=i; }
				if (j>=sz ){ j=i; break; }

				if (line[j]==')'){
					if (large < j-i){
						large = j-i;
						i++;
						break;
					}
				}
				j++;
		}
	 
			i++;
	}
	cout<<large<<endl;
}
