#include <iostream>
using namespace std; 
int main(int argc, char *argv[])
{
	int arr[]={ 1,2,3,5 };
	if (&arr[2] < &arr[1]){
	cout<<"yes"	<<endl;
	}
	else
		cout<<"not"<<endl;
	return 0;
}
