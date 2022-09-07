#include <iostream>
using namespace std; 
int lcm_u_hcf(int,int);
int gcd(int ,int);
int main(){

	cout<< "Enter two numbers: ";
	int num1,num2;
	cin>> num1>>num2;
	int lcm = lcm_u_hcf(num1,num2);
	cout<<"LCM IS : "<<lcm<<endl;
	cout<<"gcd: "<<gcd(num1,num2)<<endl;

}

int gcd (int n1,int n2){
if (n2 == 0){ return n1; }
return  gcd(n2,n1%n2); 
}

int lcm_u_hcf(int n1,int n2){
	int result;
	//using hcf
	// n1*n2/hcf = lcm
	
	int temp =n1,hcf =n2;
	while (temp != hcf){
		if (hcf >temp){ hcf -=temp; }
		else if (hcf <temp){ temp -= hcf; }
	}
	result = n1*n2/hcf;
	return result;
}
