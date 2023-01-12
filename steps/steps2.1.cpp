#include <iostream>
using namespace std; 


int fn(int num){

	if (num==0){
		return 1;
	}
	else if (num<0){
		return 0;
	}
	int n1 =fn(num-2);
	int n2 =fn(num-1);
	return n1+n2;

}
int main(int argc, char *argv[])
{
	cout<<"Enter number: ";
	int num;
	cin>>num;	
	cout<<"distinct way nos: "<<fn(num)<<endl;
	return 0;
}
