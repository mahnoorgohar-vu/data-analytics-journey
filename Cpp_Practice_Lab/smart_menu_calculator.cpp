#include <iostream>
using namespace std;

int main(){
	int choice;
	do{
	cout<<endl<<endl;
	cout<< "=== SMART CALCULATOR MENU ===\n\n1. Sum of first N numbers (using 'for' loop)\n2. Calculate Factorial (using 'while' loop)\n3. Print Multiplication Table (using 'do-while' loop)\n0. Exit\n\nEnter your choice: ";
	cin>> choice;
		
	switch (choice){
		case 1:{
			int N, sum;
			cout<<"Enter N: ";
			cin>>N;
			if (N>0){
				for (int i = 1; i<=N; i++){
					sum += i;
				}
				cout<<"Sum from 1 to "<<N<<" is: "<<sum;
			}
			else{
				cout<<"Invalid Number!"<<endl;
			}
			break;
		}
		case 2:{
			int F;
			int i=1;
			long long result=1;
			cout<<"Enter number for Factorial: ";
			cin>>F;
			if (F<0){
				cout<<"Invalid input!"<<endl;
			}
			else{
				while(i<=F){
			result = result * i;
			i++;
			}
			cout<<"Factorial of "<<F<<" is: "<<result<<endl;	
			}
			break;
		}
		case 3:{
			int N, limit;
			int y=1;
			cout<<"Enter Table no: ";
			cin>>N;
			cout<<"Enter the multipler at which you want: ";
			cin>>limit;
			do{
				cout<<N<<" x "<<y<<" = "<<(N*y)<<endl;
				y++;
			}while(y<=limit);
		    break;
		}
		case 0:{
			cout<<"Exiting program... Good bye!"<<endl;
			break;
		}
		default:
			cout<<"Invalid Choice! Try again."<<endl;
			
	}
	}while (choice != 0);
	
	return 0;
}
