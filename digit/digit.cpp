#include <iostream>
#include <sstream>
#include <vector>
using namespace std; 

int main(){
	string line;
	int ph;
	vector <int>num;
	cout<<"Enter a number stream: "<<endl;
	getline(cin,line);
	istringstream int_stream(line);

	while(int_stream>>ph){
		num.push_back(ph);
	}
	for(int n:num){
		cout<<"val: "<<n<<endl;
	}
	return 0;	
}
