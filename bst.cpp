#include <iostream>
using namespace std;

int main(){
	/* cout.fill('.')	; */
	int var =80;
	cout.width(var-1);
		cout<<"d"<<endl;
	cout.width(var-2);
	cout<<"/";
		cout<<"\\";
	cout.width(var-2);
		cout<<"/"<<endl;
	cout.width(var+5);
		cout<<"d"<<endl;
}

