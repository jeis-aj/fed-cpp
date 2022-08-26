#include <iostream>
using namespace std; 

class myclass{
	public:
	int val;
	string name;
	void entry(int s,string nm){
		val =s;
		name= nm;
	}
};

void operator<<(ostream& co,myclass* cl){
	co<<"integer: "<<cl->val<<endl;
	co<<"name : "<<cl->name<<endl;
}

void fn(myclass& cls){
	int k =55;
	/* int y; */
	int &j = k;
	int **z;
	/* &y = &k; */
	// addr of j = addr of k ;; &j = &k
	cout<<cls.val<<endl;
	cout<<cls.name<<endl;
}

int main(){
	char name[20] = "Arun jyothish k ";
	void *ptr;
	/* ptr = name; */
	/* cout<< ptr <<endl; */
	int size;
	ptr = name;

	cout<< (&name+1)<<endl;
	cout<< *(&name+1)-name<<endl;
	cout<< (&name)<<endl;
	/* cout<< (ptr)<<endl; */
	/* cout<< (ptr+1)<<endl; */
}
int ma(int argc, char *argv[])
{
	/* int arr[]={ 1,2,3 }; */
	/* cout<<arr<<endl; */
	/* fn(cls)	; */
	myclass arr[10];
	arr->entry(10012,"arun");
	(arr+1)->entry(70212,"jyothi");
	cout<<arr;
	cout<<arr+1;
	/* int *ptr =arr; */
	/* cout<< *(&arr+1)- arr <<endl; */

	return 0;
}
