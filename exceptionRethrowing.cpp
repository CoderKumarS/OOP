#include<iostream>
using namespace std;
void divide(double x, double y){
	cout<<"Inside function"<<endl;
	try{
		if(y==0.0){
			throw y;
		}
		else {
			cout<<"Division = "<<x/y<<endl;
		}
	}
	catch(double){
		cout<<"caught double inside function "<<endl;
		throw;
	}
	cout<<"end of function"<<endl;
}
int main(){
	cout<<"Inside main"<<endl;
	try{
		divide(10.5,2.0);
		divide(20.0,0.0);
	}
	catch(double){
		cout<<"caught double inside main"<<endl;

	}
	cout<<"end of main function"<<endl;
}
//write a program to a take input for an integer , if 