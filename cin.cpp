// C++ program to illustrate the take
// multiple input
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	char name[50];
	int num[50];
	int age;

	// Take multiple input using cin
	int i=0;
	/* cout<<"endl"<<'\n'; */
	/* cout<<"endl"<<'\n'; */

	while(i<5){
	cin.ignore(9,' ');
	cin >> name ;
	/* if (name[i] == '\n'){ */
	/* cout<<endl<<name<<"endl"<<endl; */
	/* i++; */
	/* } */
	}
	/* cout <<name<endl; */
	// Print output
	cout <<endl<< "Name : " << name << endl;
	/* cout << "Age : " << age << endl; */

	return 0;
}


