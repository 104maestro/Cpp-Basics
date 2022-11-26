/* Dhansu Seth has 2 sons,Ram and Shyam. Ram is 18 yrs old and Shyam is 12 yrs old. Dhansu wants to identify his son using their ages.
One fine day,he forgot the names of his son and couldn't identify them. What he remembers is just their ages. 
Use SWITCH case to solve the given problem.*/
#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Mr. Dhansu,please tell  remembered age of your son: ";
	cin>>age;
	switch(age){
		case 12:
			cout<<"This is SHYAM. OK!chacha...";
			break;
        case 18:
			cout<<"THis is your RAM,uncle ji..";
			break;
		default:
			cout<<"SORRY!. You have no remembrance of  your sons'age . Ask from your wife instead..";
					
	}
return 0;	
}  
