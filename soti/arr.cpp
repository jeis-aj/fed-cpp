#include <iostream>
using namespace std; 

struct output{
	int output1,output2;
};
void fn(int n,int *val,output&);
int arr[]={1,2,8,9,5,4};
int main(int argc, char **val)
{
	int sz = *(&arr+1)-arr;
	output data;
	fn(sz,arr,data)	;
	
	cout<<"large num index: "<<data.output1<<endl;
	cout<<"Second large num index: "<<data.output2<<endl;
	return 0;
}
void fn(int n,int *val,output& data){
	int large=*val;
	int SecondLarge=large;
		cout<<'\t'<<val[0]<<".";
	for(int i=1,j=n; i<j;++i){
		if (large < val[i]){
			large =val[i];
			data.output1 = i;	
		}	
		cout<<'\t'<<val[i]<<".";
		}
	cout<<endl;
	
	for(int i=1,j=n; i<j;++i){
		if (SecondLarge < val[i] && val[i]!= large){
			SecondLarge =val[i];
			data.output2 = i;	
		}
	}
	cout<<"large num: "<<large<<endl;
	cout<<"Second large num: "<<SecondLarge<<endl;
}
