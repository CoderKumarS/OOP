#include<iostream>
using namespace std;
class xyz{
	public:
		int data;
		void getdata(){
			cout<<"Enter a number : ";
			cin>>data;
		}
		void display(){
			cout<<"invalid ";
		}
		void check(){
			try{
				if(data%2==0){
					throw(data);
				}
				else{
					cout<<"Odd Number";
				}
			}
			catch(int data){
				display();
			}
		}
};
int main(){
	xyz x;
	x.getdata();
	x.check();
}
