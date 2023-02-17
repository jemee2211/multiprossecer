#include<iostream>
using namespace std;

class A{
	
	public:
		
		void print(){
			cout<<"A print"<<endl;
		}
};
class B:public A{
	
	public:
		
		void print(){
			cout<<"B print"<<endl;
		}
};
main(){
	
	B o;
	
	o.print();
}
