#include <iostream>
#include<string>
using namespace std;
int main(){
	string username= "104maestro";
	string* ptr= &username;
	cout<<"The username is "<<username<<endl;
	cout<<"The address using referencing variable:"<<&username<<endl;
	cout<<"The address stored at  pointer: "<<ptr<<endl;
	cout<<"THe value stored at pointer: "<<*ptr<<endl;  //dereferencing is used here
	
	//changing value of variable using pointer i.e. modification
	
	*ptr= "ujjwal_39";
	cout<<"The changed value of variable username is "<<username<<endl;
	cout<<"The address of new username is :"<< ptr<<endl;
	cout<<"The address using reference varible:"<<&username<<endl;
	
	return 0;
	
}
