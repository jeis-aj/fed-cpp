#include <iostream>
using namespace std; 	

int main(){
	cout<<char('.')*8<<endl;
}
int ma(int argc, char *argv[])
{
	int num;
	cin>>num;
	int z =0;
	int max =num;
	cout<<"num: "<<max<<endl;
	while(0<num)
	{
		cout.width(num*3);
	for (int j =0;j<max-num;++j)
		{
			z+=j;
		cout<<' '<<z;
	}
	++z;
	cout<<endl;
	--num;
	}
	return 0;
}
