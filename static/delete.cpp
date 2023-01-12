#include <iostream>
using namespace std; 
int* fn(){
	static int count=0;
	cout<<count<<endl;
	++count;
	return &count;
}
int main(int argc, char *argv[])
{
	fn();	
	fn();	
	fn();	
	int *ptr = fn();	
	*ptr =19;
	fn();	
	fn();	
	delete ptr;
	fn();	
	return 0;
}
