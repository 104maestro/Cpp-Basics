//simple program to find whether a number is odd or even
#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the +ve number you want to check:";
	cin>>num;
	if(num%2==0){
		cout<<"The given number is even.\n";
	}
	else{
		cout<<"The given number is odd.\n";
	}
	
	return 0;
}
