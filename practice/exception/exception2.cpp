#include<iostream>
#include<iomanip>
using namespace std;
int test(int *a){
	int sum =0;
	for(int i=0;i<5;i++)
		sum+=a[i];
	return sum;
}
int main(){
	int *a=new int[5];
	try{
		cout<<"Enter marks of 5 subject: \n";
		for(int i = 0; i<5; i++)
			cin>>a[i];
		int sum =test(a);
		if(sum%3==0)
			throw 1;
		else if(sum%5==0)
			throw 1.0;
		else if(sum%7==0)
			throw 'a';
		else
			cout<<"Sum: "<<sum;
	}
	catch(int data){
		cout<<"Multiple of 3 "<<0;
	}
	catch(double data){
		cout<<fixed<<setprecision(1)<<"Multiple of 5 "<<0.0;
	}
	catch(char data){
		cout<<"Multiple of 7 "<<"Z";
	}
}
