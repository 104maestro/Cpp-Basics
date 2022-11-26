//table of a number using for loop
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"You want table of:";
	cin>>a;
	for(int i=1;i<=10;i++){
		cout<<a<<"x"<<i<<"="<<a*i<<endl;
	}
	return 0;
}
