//Table of a number usinf while loop

#include<iostream>
using namespace std;
int main(){
	int deNum;
	int i=1;
	cout<<"Enter the number you want table of: ";
	cin>>deNum;
	while(i<11){   //not to put = operator or <=,mind that
		cout<<deNum<<"x"<<i<<"="<<deNum*i<<endl;
		i=i+1;
	}
	return 0;	
}
