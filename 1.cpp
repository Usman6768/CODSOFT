#include<iostream>
using namespace std;

int main() {
	
	
	
	char opr;
	int First_Number;
	int Second_Number;
	double output;
	
	cout<<"Enter First Number : ";
	cin>>First_Number;
	
	cout<<"Enter Second Number : ";
	cin>>Second_Number;
	
	cout<<"Enter Operator From These ( + , - , * , / ) : ";
	cin>>opr;
	
	switch(opr){
		
		case '+':
			output = First_Number + Second_Number;
			break;
		case '-':
			output = First_Number - Second_Number;
			break;
		case '*':
			output = First_Number * Second_Number;
			break;
		case '/':
			output = First_Number / Second_Number;
			break;
		default:
			cout<<"Invalid Operator!";
			return 1;
	}
	
	
	cout<<"Result : "<<First_Number<<" "<<opr<<" "<<Second_Number<<" = "<<output;
	
	return 0;
}