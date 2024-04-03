#include<iostream>
using namespace std;
class complex{
	public:
		int x,y;
		complex(int x=0,int y=0){
			this->x=x;
			this->y=y;
		}
		void display(){
			cout<<x<<" + "<<y<<"i";
		}
		complex operator +=(complex& c2){
			this->x += c2.x;
        	this->y += c2.y;
			return *this;
		}
};
int main(){
	int num;
	cin>>num;
	complex c1[num],sum;
	for(int i=0;i<num;i++){
		int x,y;
		cin>>x>>y;
		c1[i]=complex(x,y);
		sum+=c1[i];
	}
	sum.display();
	return 0;
} 
