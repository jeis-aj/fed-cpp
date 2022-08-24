#include <iostream>
using namespace  std;

int main()
{
	string str1;
	string  srt=" ";
	string str2;
	cout<<"Enter a main String: "<<endl;
	cin>>str1;
	cout<<"Enter another String: "<<endl;
	cin>>str2;
	for (char c:str1) {
	for (char i : str2) {
		if(c==i){
			srt+=c;
		}	
	}		
	}
	cout<<"the common largest sub sq: "<<srt<<endl;
	return 0;
}
