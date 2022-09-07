#include <iostream>

using namespace std; 

int fn()
{
	/* int arr[]= { 1,3,5 ,8,7 }; */
	int arr[]= {1,2,3,4};
	int productArr[sizeof(arr)/sizeof(*arr)];
	int product =1;
	for (int num:arr){
	product *=num;
	cout<<num<<'\t';
	}
	int i=0;	
	cout<<"product: "	<<product<<endl;
	for (int num:arr){
	productArr[i]=product/num;
	cout<<productArr[i]<<'\t';
	++i;
	}
	
	return 0;
}
struct rt
{	int *ptr,sz;};

struct rt fin(){
	int sz ;
	cout<<"enter sz: ";
	cin>>sz;
	int *ptr = new int[sz];
	for (int i=0;i<sz;++i)	{
		int num;
		cin>>num;
		ptr[i] = num;
	}
	cout<<endl<<"arr finished"<<endl;
	rt r{ ptr, sz};
	/* rt r; */
	/* r[0]=ptr; */
	/* r[1]=sz; */
	return r;
};
int main(int argc, char *argv[])
{
	int num;
	/* cin>>num; */
	rt rti = fin();
	for (int i=0; i<rti.sz;++i){
		cout<< *(rti.ptr+i)<<endl;
	}
	int *p=rti.ptr;
	int sz = rti.sz;
	delete[] rti.ptr;
	cout<< "Arr deleted! "<<endl;
	for (int i=0; i<sz;++i){
		cout<< *(p+i)<<endl;
	}
	/* cout<<sz<<endl; */
	/* cout<<"."<<num<<"."<<endl; */
	return 0;
}
