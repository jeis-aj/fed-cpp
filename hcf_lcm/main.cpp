#include <iostream>
#include <vector>
using namespace std; 

int lcm(int,int);
int hcm(int,int);
int gcd(int,int);
int main(int argc, char *argv[])
{
	cout <<"Enter Two  Number : ";
	int num1,num2;
	cin>>num1>>num2;

	/* int hcm_result = hcm(num1,num2); */
	/* cout<< "HCM of number is : "<<hcm_result<<endl; */
	int lcm_result = lcm(num1,num2);
	cout<< "LCM of number is : "<<lcm_result<<endl;
	return 0;
}
/*
vector multiples(int num1){
	cout<<"Enter Two numbers: ";
	int num1,num2;
	cout<<endl<<"LCM of given Two number: "<<lcm(num1,num2)<<endl;
}
*/
int lcm(int num1,int num2){
	return num1/gcd(num1,num2)*num2;
}
int gcd(int num1,int num2)
{
	cout<<"called gcd"<<endl;
	cout<<"n1: "<<num1<<'\t'<<"n2: "<<num2<<endl;
	cout<<"check wheather num2 is zero, if yes return num1"<<endl;
	if(!num2){ return num1; cout<<"num2 is zero returned num1"<<endl;}
	else{
		cout<<"num2 isn't zero, recrursive call gcd(num2 as new num1,num1%num2 as new num1)"<<endl;
	return gcd(num2,num1%num2);
	}
}
