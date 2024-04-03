#include<iostream>
using namespace std;
bool isPrime(int prime){
	if(prime==1||prime==0){
		cout<<"out of bound\n";
		return false;
	}else if(prime==2||prime==3){
		return true;
	}else{
		for(int i=2;i<=prime/2;i++){
			if(prime%i==0){
				return false;
			}
		}
		return true;
	}
}
int main(){
	int prime;
	try{
		cout<<"Enter a number: \n";
		cin>>prime;
		if(isPrime(prime))
			throw true;
		else
			cout<<"Not a prime";
	}
	catch(bool data){
		cerr<<"Prime input caused exception";
	}
}
