#include <iostream>
#include <sstream>
using namespace std; 

int main()
{
	int n;
	string line;
	getline(cin,line);
	istringstream ms(line);
	while( ms>>hex>>n){

	cout<<n<<endl;
	}
	return 0;
}
