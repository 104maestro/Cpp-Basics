#include <iostream>
using namespace std;
int main(){
	int age;
	cout<< "Enter your age : ";
	cin>>age;
	if(age<0 || age>111){
		cout<<"You freak. How are u on the planet!!!";
	}
	else if(age>=18){
		cout<<"You can vote";
	}
	else{
		cout<<"Ineligible to vote . Try after few years.. ";
	}
	
return 0;	
}
