#include <iostream>	
using namespace std;

template <typename T>
void fn(int s,T& arr){
	int i=s;
	int j=i-1;
	for( ; i < *(&arr+1)-arr;j= i++ ){
		cout<<"i: "<<i<<'\t';
		cout<<"j: "<<j<<endl;
	}
}
int main(int argc, char *argv[])
{	char arr[9];
	fn(1,arr);
	return 0;
}

