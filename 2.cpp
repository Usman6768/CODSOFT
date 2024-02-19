#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	
	srand(time(0));
	
	int guessing_number = rand() % 50 + 1;
	int number;
	
	cout<<"Rules :\n 1)You Have To Guess(Enter) a number \n 2)The system will prompt that Your Guess is High or low untill You Get it Right  "<<endl;
	cout<<endl;
	do {
		cout<<"Enter The Number : ";
		cin>>number;
		
		
		if(number==guessing_number)
		cout<<"Welldone! You Guess the Number Right "<<endl;
		
		else if(number>guessing_number)
		cout<<"Try Again! The Guess is Too High"<<endl;
		
		else 
		cout<<"Try Again! The Guess is Too Low"<<endl;
	}
	while(number!=guessing_number);
	
	return 0;
	
	
}
