#include <iostream>
using namespace std; 
int add(int num, int num2){
return num+num2;
}
void fn(int num,int num2, int (*ny)(int,int)){
	int result = ny(num,num2);
	cout<<"result is : "<<result<<endl;
}
int main(int argc, char *argv[])
{
	int num,num2;
	cin>>num;	
	cin>>num2;	
	fn(num,num2,add);
	return 0;
}

