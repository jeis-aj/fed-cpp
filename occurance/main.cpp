/*
 * Finding the First and Last Occurance of an Element
 */


#include <iostream>
using namespace std; 	

struct result{
	int first;
	int last;
};

struct result find(int *arr,int sz,int val){
	result ans{-1,-1};
	bool indexLast =false;
	bool indexFirst =false;
	for (int i=0,j=sz-1;i<j;++i){
		if(arr[i]==val && !indexFirst){
		ans.first = i;
		indexFirst = true;
		}
		if(arr[i]==val ){
		ans.last = i;
		}
	}
	return ans;
}
int main(int argc, char *argv[])
{
	result ans;
	int arr [] ={ 1,2, 3, 5 ,5 ,5 ,5, 9, 8 };
/* int arr [] ={ 0, 1, 2, 3, 4 ,5 ,6 ,7, 8, 9 }; */
	int len = sizeof(arr)/sizeof(arr[0]);
	cout<<"len: "<<len<<endl;
	int val = 5;
	ans = find(arr,len,val);
	cout<<"first: "<<ans.first<<endl;
	cout<<"last: "<<ans.last<<endl;
	return 0;
}
