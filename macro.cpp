#include <iostream>
using namespace std; 

#define cube(v) v*v*v
#define sqrt(v) v*.5
#define swap(a,b) a+b
int ma(int argc, char *argv[])
{
	cout<<cube(3)<<endl;
	cout<<sqrt(9)<<endl;
	int a = 2;
	int b = 3;
	/* cout<<cin; */
	cout<<swap(a,b)<<endl;
	return 0;
}


class aclass{
	public:
		int value;
		aclass(int val){
			value =val;
		}
};

int main(){
char c[20]="Arun jyothish k ";  // character pointer array of size 20
			  // 	"hello world"
			  // 	**c[20] --> pointer array of character pointer
			  // 	{ "stirng","value","look","back" }
/* c = "hello"; */
char chara[]=" hello world how are you";
aclass a{10};
char *ch = c;
cout<<*ch<<endl;
char *ptr[5] ;
*ptr= c;
*(ptr+1) =chara;
cout<<*ptr<<endl;
cout<<*(ptr+1)<<endl;
/* cin>>c; */
int sz = *(&c+1)-c;
cout<<sz<<endl;
/* cout<<c<<endl; */
}
