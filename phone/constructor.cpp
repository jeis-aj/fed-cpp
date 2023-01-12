#include <iostream>
using namespace std; 

void inc(int *x, int &y){
	cout << "before change " << *x <<endl;
	*x++; y++;
	cout << "after change " << *x <<endl;
}

int other(int argc, char *argv[])
{
	int a = 5, b=5;	
	inc(&a,b);
	cout << a <<" " << b << endl;
	return 0;
}

void point(){
	int arr[10];
	int *i = &arr[2], *j = &arr[6];
	int d = i-j;
	cout << d <<endl;
}
int main(int argc, char *argv[])
{
	point();
	return 0;
}

void shift(){
	int x  = 1;
	(x = x << 7);
	cout << x;
	cout <<endl;
	(x = x >> 6);
	cout << x;
}
