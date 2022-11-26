#include <iostream>
using namespace std;
int add(int a,int b){
	int c;
	c=a+b;
	return c;
}
int subtract(int a,int b){
	int c;
	c=a-b;
	return c;
}
int multiply(int a,int b){
	int c;
	c=a*b;
	return c;
}
int divide(int a,int b){
	int c;
	c=a/b;   //the divide function just returns the quotient here
	return c;	
}
int main(){
	int a,b;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	cout<<"The sum is:"<<add(a,b)<<endl;
	cout<<"The subtraction is:"<<subtract(a,b)<<endl;
	cout<<"The multiplication  is:"<<multiply(a,b)<<endl;
	cout<<"The division is:"<<divide(a,b)<<endl;
	
	return 0;
	
}
