#include <iostream>
using namespace std; 

struct data{
	uint64_t fact;
	int recursionCount;
};
struct data fact (int num){
	static struct data s;
	if (num ==1){ return  s.recursionCount =0,s.fact =1,s; }
	s.fact = num*fact(num-1).fact,++s.recursionCount;
	return s;
}
typedef struct data dta;
int main(){
	/* int num =10; */
	/* cout << fact(num).fact<<endl; */
	/* cout << fact(num).recursionCount<<endl; */
	int val =1,num =3, var =8;
	val = (num+5,var+10);
	cout<<val<<endl;
	cout<<num<<endl;
	cout<<var<<endl;
}
